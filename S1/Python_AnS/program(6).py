numbers=input("enter the list fo integers,seperated by comas")
#numbers=[int(x) for x in numbers.split(",")]
for number in numbers:
	if number>100:
			print("over")
	else:
	    	print(number)
