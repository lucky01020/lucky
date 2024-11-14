#Write a Python program to read a file line by line and store it into a list

l = [] #empty list

file = open("hello1.txt","r")

lines = file.readlines()

for i in lines: 
       l.append(i.strip()) #using strip to remove the empty space

print(l)        #printing results