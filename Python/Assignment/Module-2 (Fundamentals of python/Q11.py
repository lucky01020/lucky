#Write a Python program to count the number of characters (character frequency) in a string 

n = input("Enter the string:")

d={}

for i in n:
    if i in d:
        d[i]+=1
    else:
        d[i]=1

print(d)        
            