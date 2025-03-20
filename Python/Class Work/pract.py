d = {'a':200,'b':100}
d1 = {'a':100,'b':200}

d2 = {}

for i, value in d.items():
    d2[i] = value

for i,value in d1.items():
    if i in d2:
      d2[i] += value
    else:
       d2[i]=value  
print(d2)                