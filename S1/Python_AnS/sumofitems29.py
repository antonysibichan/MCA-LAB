numbers=raw_input("Enter a list of numbers seperated by spaces:")
numbers_list=list(map(int,numbers.split()))
total_sum=sum(numbers_list)
print("Suum of sll items in the list:",total_sum)
