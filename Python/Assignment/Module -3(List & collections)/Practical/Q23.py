#Write a Python script to concatenate following dictionaries to create a new one.

d = {'a':1}
d1 = {'b':2}
d2 = {'c':3}

new_dict = {**d,**d1,**d2}

print(new_dict)