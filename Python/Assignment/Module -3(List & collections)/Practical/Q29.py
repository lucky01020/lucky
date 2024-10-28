#Write a Python program to print all unique values in a dictionary.

d = {'a' : 1, 'b'  : 2,'c' : 1,'d' : 3,'e' : 4,'f' : 5}


unique_value = set(d.values())

for i in d:

  print(unique_value)