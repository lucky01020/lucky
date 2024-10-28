#Write a Python program to replace last value of tuples in a list. 

t = [(1,2,3,4,5,6,7,8,9)]

new_value = 0

new_tuple = [t[:-1]+ (new_value,) for i in t ]

print(new_tuple)