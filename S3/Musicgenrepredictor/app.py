from flask import Flask, render_template, request, jsonify
from joblib import load
import os
import numpy as np
import librosa

app = Flask(__name__)

def extract_features(file_path):
    try:
        y, sr = librosa.load(file_path, sr=None)
        mfccs = librosa.feature.mfcc(y=y, sr=sr, n_mfcc=13)
        chroma = librosa.feature.chroma_stft(y=y, sr=sr)
        mel = librosa.feature.melspectrogram(y=y, sr=sr)
        contrast = librosa.feature.spectral_contrast(y=y, sr=sr)
        tonnetz = librosa.feature.tonnetz(y=y, sr=sr)
        return np.hstack([np.mean(mfccs, axis=1), np.mean(chroma, axis=1),
                         np.mean(mel, axis=1), np.mean(contrast, axis=1),
                         np.mean(tonnetz, axis=1)])
    except Exception as e:
        print(f"Error processing file {file_path}: {e}")
        return None

def predict_genre(file_path):

    model = load('music_gener_model.joblib')
    label_to_genre = {
        0: 'Blues',
        1: 'Classical',
        2: 'Country',
        3: 'Disco',
        4: 'Hip-Hop',
        5: 'Jazz',
        6: 'Metal',
        7: 'Pop',
        8: 'Reggae',
        9: 'Rock',
        # Add more genres as per your dataset
    }

    # Extract features from the input file
    features = extract_features(file_path)
    
    # Check if feature extraction was successful
    if features is None:
        raise ValueError("Feature extraction failed. Check the input audio file.")
    
    # Reshape the feature array to match the input shape expected by the model
    features = features.reshape(1, -1)
    
    # Predict the genre (numerical label)
    predicted_label = model.predict(features)
    
    # Get the genre name from the label_to_genre dictionary
    predicted_genre = label_to_genre.get(predicted_label[0], "Unknown Genre")
    
    return predicted_genre

# Serve the HTML page
@app.route('/')
def index():
    return render_template('index.html')

# API endpoint for file upload and genre classification
@app.route('/classify-genre', methods=['POST'])
def classify_genre():
    if 'file' not in request.files:
        return jsonify({'error': 'No file part'}), 400

    file = request.files['file']

    if file.filename == '':
        return jsonify({'error': 'No selected file'}), 400

    if file:
        # Save the file to a temporary location
        file_path = os.path.join('uploads', file.filename)
        file.save(file_path)

        # Call your classification function
        genre = predict_genre(file_path)

        # Clean up the file (optional)
        os.remove(file_path)

        return jsonify({'genre': genre})

if __name__ == '__main__':
    # Ensure the uploads folder exists
    os.makedirs('uploads', exist_ok=True)
    app.run(debug=True)
