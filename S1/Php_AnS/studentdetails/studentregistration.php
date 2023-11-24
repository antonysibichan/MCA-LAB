<htm>
	<head>
		<title>Registration</title>
	</head>
	<body>
		<form action="details.php" method="POST">
			<label for="name">NAME:</label>
			<input type="text" id="name" name="name"><br>
			<label for="rollno">ROLLNO:</label>
			<input type="rollno" id="rollno" name="rollno"><br>
			<label for="email">EMAIL:</label>
			<input type="email" id="email" name="email"><br>
			<label for="mobile">MOBILE:</label>
			<input type="text" id="mobile" name="mobile"><br>
			<label for="name">DEPARTMENT:</label>
				<select name="dept" id="dept">
					<option value="select">--select--</option>
					<option value="mca">MCA</option>
					<option value="cse">CSE</option>
					<option value="ce">CE</option>
					<option value="me">ME</option>
					<option value="eee">EEE</option>
					<option value="ece">ECE</option>
				</select><br>
			<input type="submit" name="submit" value="Register"><br>
		</form>
	</body>		
</html>

