#Write a python program to sum of the first n positive integers.

n=int(input("Enter the number:"))


if n<1:
    print("Enter positive number..")

else:
    sum=n*(n+1)//2
    print("Sum of first n positive number",sum)