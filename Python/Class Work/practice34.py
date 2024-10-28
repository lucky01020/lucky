#Write a Python function that takes two lists and returns true if they have 
#at least one common member.

"""
list=[23,34,45,56,78,76]
list1=[23,22,25,27,77,79]

for i in list:
    if i in list1:
        print("True")
    else:
        print("false")
        """
#Write a Python program to check whether a list contains a sub list

l = [12,23,34,45,56,78]
l1 = [24,43] 

len_l = len(l)
len_l1 = len(l1)

found = False

for i in (1,6):
    if l[i:i + len_l1]==l1:
        found = True

if found == True: 
    print("List contains sublist")       
else:
    print("List does not contains sublist")   