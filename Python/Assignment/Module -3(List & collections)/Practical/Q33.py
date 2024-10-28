#Write a Python program to create a dictionary from a string.

input_string = 'LuckyTiwari'

d = {}

for i in input_string:
    if i in d:
        d[i]+=1
    else :
        d[i]=1
print(d)        
