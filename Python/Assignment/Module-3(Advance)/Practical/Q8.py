#Write a Python program to count the number of lines in a text file.

file = open("hello1.txt","r")

line_count = 0

for i in file:
    line_count+=1 #adding the word to the line count

print(line_count) #printing results

file.close()    