colors = input("Enter comma-seperated color names: ")
#colors = color_names.split(',')
#colors = [color.strip() for color in colors]
colors = [str(x) for x in colors.split(",")]
if len(colors) >= 2:
		print("First color: ",colors[0])
		print("Last color: ",colors[-1])
else:
		print("please enter atleast two colors")    #"HAPPINESS IS ONLY REAL WHEN IT IS SHARED"
		
