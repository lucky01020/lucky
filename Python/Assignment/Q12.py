#Write a Python program to count occurrences of a substring in a string.

n = input("Enter the string:")
s = input("Enter the substring:")

count=0
start=0
sl=0

for i in n:
    sl+=1

while start<sl:
    pos = n.find(s,start)
    if pos!=-1:
        count+=1
        start = pos+1
    else:
        break

print(f"overlapping occurence of '{s}'in '{n}':{count}")           

