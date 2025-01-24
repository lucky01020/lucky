#Write a Python program to split a list into different variables.
#Write a Python program to split a list into different variables.
"""
l = [1,2,3,4,5]

a,b,c,d,e = l

print("a is :",a)
print("b is :",b)
print("c is :",c)
print("d is :",d)
print("e is :",e)
"""
#Write a Python program to convert a tuple to a string. 

"""
t = ("L","u","c","k","y")

ts= "".join(t)

print("Tuple as string : ",ts)
"""
#Write a Python program to check whether an element exists within a tuple.

"""
t = [12,23,34,45,56]

element_check = 34

if element_check in t:
    print(f"{element_check} exist in the tuple")
else :
    print("Not exist in the tuple")

another_element = 57

if another_element in t:
    print(f"{another_element} exist in the tuple")
else :
    print("not exist in the tuple")
"""

""""
#Write a Python program to find the length of a tuple. 
t = (23,"hello",44)

t1 = len(t)

print(t1)
"""
#Write a Python program to convert a list to a tuple.
"""
l = [12,23,34,44]

t = tuple(l)

print(t)
"""
#Write a Python program to reverse a tuple. 

"""
t = (1,2,3,4,5)

reverse_t = t[::-1]

print("reversed tuple : ",reverse_t)
"""
#Write a Python program to replace last value of tuples in a list. 
"""
t = [(1,2,3,4,5,6,7,8,9)]

new_value = 0

new_tuple = [t[:-1]+ (new_value,) for i in t ]

print(new_tuple)
"""

"""
#Write a Python program to find the repeated items of a tuple. 

t = (1,2,3,4,1,2)

unique_item = set()
repeated_item = set()

for i in t:
    if i in unique_item:
        repeated_item.add(i)
    else:
        unique_item.add(i)

print("Repeated numbers",repeated_item)            
 """
#Write a Python program to convert a list of tuples into a dictionary.
"""
t = [('a',1),('b',2)]

new_dict = dict(t)

print(new_dict)
"""
#Write a Python script to concatenate following dictionaries to create a new one.
"""
d = {'a':1}
d1 = {'b':2}
d2 = {'c':3}

new_dict = {**d,**d1,**d2}

print(new_dict)
"""
#Write a Python script to check if a given key already exists in a dictionary. 

"""
d ={'a':1,'b':2,'c':3}

key_to_check = 'b'

if key_to_check in d:
    print(f"{key_to_check} exist in dict")
else :
    print(f"{key_to_check} does not exist in dict")

another_key = 'e'

if another_key in d:
    print(f"{another_key} exist in dict")
else :
    print(f"{another_key} does not exist in dict")
"""
#Write a Python script to print a dictionary where the keys are numbers between 1 and 15.     
"""
d = {}

for i in range (1,16):
    d[i]=i**3
print(d)
"""
#Write a Python script to merge two Python dictionaries 
"""
d ={'a': 1,'b':2}
d1 ={'c':3,'d':4 }  

merged_dict = {**d,**d1}

print(merged_dict)
"""
"""
#Write a Python program to map two lists into a dictionary

key = [1,2,3]
values = ['a','b','c']

mapped_list= dict(zip(key,values))

print(mapped_list)
"""

#Write a Python program to combine two dictionary adding values for common keys. 
"""
d={'a':300,'b':200}
d1={'a':200,'b':100}

d2={}

for i ,value in d.items():
    d2[i]= value
for i, value in d1.items():
    if i in d2:
        d2[i]+=value
    else:
        d2[i]= value    
print(d2)
"""

