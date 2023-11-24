print 'enter two numbers'
a=input("enter the 1st number")
b=input("enter the 2nd number")
c=input("enter the 2nd number")
if a>b:
	 if a>c:
		print "the largest number is"+str(a)
	else:
		print "the largest number is"+str(c)
else:
	if b>c:
		print "the largest number is"+str(b)
	else:
		print "the largest number is"+str(c)
