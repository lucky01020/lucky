#Write a Python program to check if a number is positive, negative or zero

n =int(input("Enter the number:"))

if n==0:
    print("Number is neutral or zero!!")  #if condition for number zero

elif n>=1:  
    print("Number is positive!!")  #elif condition for positive integer

else:
    print("Number is negative!!")      