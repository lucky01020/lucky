#Write a Python program to count the occurrences of each word in a given sentence 

s = input("Enter the string:")

words = s.split()

d={}

for i in words:
    if i in d:
        d[i]+=1
    else:
        d[i]=1

for i,count in d.items():
    print(i,":",count)
