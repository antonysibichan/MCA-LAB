startyear=input('enter the first year')
endyear=input('enter the end year')
print 'list of leap years'
for year in range(startyear,endyear):
	if((year%4==0)and(year%100!=0))or(year%400==0):
	 print(year)
