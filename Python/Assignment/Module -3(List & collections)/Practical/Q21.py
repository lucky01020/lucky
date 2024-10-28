#Write a Python program to find the repeated items of a tuple. 

t = (1,2,3,4,1,2)

unique_item = set() 
repeated_item = set() #converting into set for non duplicate items

for i in t:
    if i in unique_item:
        repeated_item.add(i)  
    else:
        unique_item.add(i)

print("Repeated numbers",repeated_item)  