#Write a Python program to copy the contents of a file to another file. 

file = open("hello1.txt","r")

sfile = open("hello2.txt","w")

s = file.read()
s1 = sfile.write(s) #copying the file to another file


