#Write a Python program to combine two dictionary adding values for common keys. 

d={'a':300,'b':200}
d1={'a':200,'b':100}

d2={}   #empty dictionary

for i ,value in d.items():  
    d2[i]= value
for i, value in d1.items():
    if i in d2:             
        d2[i]+=value  
    else:
        d2[i]= value    
print(d2)




