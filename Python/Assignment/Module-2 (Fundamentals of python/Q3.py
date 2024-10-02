# Write a Python program to get the Fibonacci series of given range.

n=int(input("Enter the elements:"))
a=0
b=1

for i in range(1,n+1):  #using loop
    print(a)
    c=a+b
    a=b    #swapping variables
    b=c


