#Write a Python program to read last n lines of a file.

n = int(input("Enter the line : ")) #userinput

file = open("hello1.txt","r") 

lines = file.readlines()

last_lines = lines[-n:] #using slicing for reading the lst line

for i in last_lines:
    print(i,end="")

