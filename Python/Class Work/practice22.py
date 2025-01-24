""""
class A:   # class is a collection of data members and members function

    def div(self):

        n = int(input("Enter the number : "))
        n1 = int(input("Enter the second number : "))

        print("Result : ",n/n1)


obj = A()   #object is instance of class through which we can access all the properties of classs
obj. div() 
"""
"""
class A:   # when one class derives the properties to another class it is called inheritance

    def hello(self):

     print("This is single inheritance!!")

class B(A):

       def hello1(self):

           print("Thank you!!")

obj = B()
obj.hello()
obj.hello1() 
"""   
"""
a = "Hello world"

print(a[::-1])
"""
"""
a = "LuCky"

b = ""

for i in a:
    if i.islower():
        b+=i

print(b)  

for i in a:
    if i.isupper():
        b+=i

print(b) 

"""
"""
a = "Lucky is at School doing Homework"

b = a.split()



for i in range(len(b)):
   if b[i].islower():
    b[i] = b[i][::-1]

b1 = " ".join(b)    
    

print(b1)
"""
"""
a = input("Enter the name :")

a1 = a[::-1]

if a == a1:
    print("it is palindrome")
else:
    print("not palindrome!!")
"""
"""
l = []

c = int(input("Enter the numbers you want : "))

for i in range(c):
    x = int(input("Enter the numbers : "))
    l.append(x)

print(l)
"""
"""
"""""
"""
l = [12,32,11,66,43]

b = []

for i in range(len(l)-1,-1,-1):
    b.append(l)
    
print(b)
"""
"""
"""
"""
l = [9,5,-2,1,4,-6]

neg = []
pos = []

for i in l:
    if i>=0:
       pos.append(i)
    else:
      neg.append(i)

print(f"positives numbers are {pos} and this are {neg} negatives numbers") 
"""
"""
l = [23,45,234,433,764,3443,34323]
index = 0
max = 0

for i in range(len(l)):
     if l[i] > max :
        max = l[i]
        index = i

print(f"maximun number is {max} and index is {index}")
"""
"""
l = [12,34,54,67,23,43]

l.sort()

scnd = l[-2]
print(scnd)
"""

# d = {1:20,2:40,3:60}
# d1 = {4:80,5:100,6:120}

# d2 = {}

# for i, value in d.items():
#     d2[i] = value

# for i, value in d1.items():
    
#     d2[i] = value    

# print(d2) 
"""
"""

# l = [12,23,3,4,5,2,4,2,6,75,6,7,7,99,5,5,3,3,6]

# d = {}

# for i in l:
#     if i in d.keys():
#         d[i]+=1
#     else:
#         d[i]=1

# print(d)
"""

"""
""

d = {1:20,2:40,3:60}
d1 = {3:80,5:100,6:120}

for i in d1.keys():
    if i in d.keys():
        d[i] =  d[i]+ d1[i]
    else:
        d[i] = d1[i]

print(d)
           
