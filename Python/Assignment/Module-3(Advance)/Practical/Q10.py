#Write a Python program to write a list to a file. 

l = ["apple","banana","watermelon"] #taking list

file = open("hello1.txt","w")

for i in l:
    file.write(i) #writing a list with the write method

file.close() 