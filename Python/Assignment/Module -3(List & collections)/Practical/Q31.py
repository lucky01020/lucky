#Write a Python program to find the highest 3 values in a dictionary 

d = { 'a' : 10,
       'b' : 20,
       'c' : 30,
        'd' : 15,
        'e' : 22} #taking dictionary


highest_value = sorted(d.values(),reverse= True)[:3] #sorting for ascending and for highest giving index

print("result : ",highest_value)