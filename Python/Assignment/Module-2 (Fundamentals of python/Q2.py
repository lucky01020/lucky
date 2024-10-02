#Write a Python program to get the Factorial number of given number.

n=int(input("Enter the number:"))

fact=1

for i in range(1,n+1):   #using loop 
    fact*=i               #applying condition for factorial

    print("factorial is",fact)

