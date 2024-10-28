#Write a Python program to find the second smallest number in a list.

l = [12,23,45,11,10,67,34,90,22]

s = list(set(l))  #converting list to set for original numbers 

if len(s) <2:
    print("numbers should be more than two!!")

else:
    s.sort()   #arranging number in asc order
    s1=s[1]
print(s1)

