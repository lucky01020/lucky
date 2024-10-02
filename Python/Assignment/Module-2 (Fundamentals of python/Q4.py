#Write python program that swap two number with temp variable and without temp variable. 

n=int(input("Enter the number:"))

n1=int(input("Enter the second:"))

temp=n
n=n1     #swapping variables using third variables
n1=temp

print("After swapping ",n)
print("After swapping ",n1)

#without using third variable
a=int(input("Enter the first number:"))
b=int(input("Enter the second number:"))

a,b=b,a  #swapping variables

print("After swapping:",a)
print("After swapping",b)