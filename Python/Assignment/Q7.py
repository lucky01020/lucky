#Write a Python program to sum of three given integers. However, if two values are equal sum will be zero. 

n=int(input("Enter the number:"))

n1=int(input("Enter second number:"))

n2=int(input("Enter the third number:"))  #user input

if n==n1 or n==n2 or n1==n2:  #applying condtion for sum is zero
    print("sum is zero")

else:
    sum=n+n1+n2                  #adding three numbers
    print("Addition is ",sum)

