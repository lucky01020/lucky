#Write a Python program to map two lists into a dictionary

key = [1,2,3]
values = ['a','b','c']

joint= dict(zip(key,values)) #adding key and values by usin zip line

print(joint)