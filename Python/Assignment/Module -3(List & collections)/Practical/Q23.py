#Write a Python script to concatenate following dictionaries to create a new one.

d = {'a':1}
d1 = {'b':2}
d2 = {'c':3}

d4 = {**d,**d1,**d2} #adding all dictionaries into one

print(d4)