year=input("enter the year:")
if(year % 400==0)and(year % 100==0):
	print str(year)+'is leap year'
elif(year % 4==0)and(year % 100!=0):
	print str(year)+'is a leap year'
else:
	print str(year)+'is not leap year'
