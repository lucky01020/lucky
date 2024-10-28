#Write a Python program to generate and print a list of first and last 5 
#elements where the values are square of numbers between 1 and 30. 

l = []  #empty list

for i in range(1,31): 
    if i <=5 or i>25: 
        l.append(i*i)  #square of  last digits

print(l)    