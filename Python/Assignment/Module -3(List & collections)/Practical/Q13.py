#Write a Python program to check whether a list contains a sub list

l = [1,2,3,5,6,7,8]

l1 = [5,6]

len_l = len(l)
len_l1 = len(l1)

found = False

for i in range (1,6):
    if l[i:i+len_l1]==l1:
        found = True

if found:
    print("Main list contains sublist!!")
else:
    print("Main list does not contain sublist!!")    
