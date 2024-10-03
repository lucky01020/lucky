#Write a Python program to count the number of characters (character frequency) in a string 

n = input("Enter the string:")

d={}                 #empty dictionary

for i in n:
    if i in d:
        d[i]+=1   #occurence of more than one character
    else:
        d[i]=1

print(d)        
            