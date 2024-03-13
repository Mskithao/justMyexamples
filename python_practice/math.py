#Ask user to input 2 values and store them in vars num1 & num 2
#the input module reads input from user
#split function separates whitesapced values
num1, num2 = input('enter 2 numbers: ').split()

#convert strings into regular numbers interger
num1 = int(num1)
num2 = int(num2)

#add the  the values entered and store in sum
sum = num1 + num2

#subtract values and store difference
difference = num1 * num2

#multiply the values and store product
product = num1 * num2

#divide and store the quotient
quotient = num1 / num2

#use modulus to find remainder
remainder = num1 % num2

#print the results
print("{} + {} = {}".format(num1, num2, sum))
print("{} - {} = {}".format(num1, num2, difference))
print("{} * {} = {}".format(num1, num2, product))
print("{} / {} = {}".format(num1, num2, quotient))
print("{} % {} = {}".format(num1, num2, remainder))
