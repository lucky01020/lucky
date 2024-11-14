#Write a Python program to read first n lines of a file. 

n = int(input("Enter how many lines you have to read : ")) #user input

file = open("hello1.txt")
for i in range(n): #using loop

   print(file.readline()) #using readline to read the lines

file.close()   

