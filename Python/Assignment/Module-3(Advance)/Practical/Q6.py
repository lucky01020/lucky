#Write a Python program to read a file line by line store it into a variable.

a = "" #empty 

file = open("hello1.txt","r")

lines = file.readlines()

for i in lines: 
    a +=i          #adding to the empty variable

print(a)
    
