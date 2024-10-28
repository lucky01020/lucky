#parameters with retun type
"""
def add(a,b):
    return a*b

result = add(10,15)
print("Answer : ",result)
"""
#parameters with no return type
"""
def hello(name):
     print(f"{name}")
hello("Lucky")
"""
#no parameters with return type
"""
def hello():
    return "Welcome"
n = hello()
print(n)
"""
#no parameters with no return type
"""
def hello():
    print("Welcome")
hello()  
"""

#basic example of for loop
"""
n = int(input("Enter the number : "))

for i in range (1,n+1):

    for k in range (1,n-i+1):
        print(" ",end="")

    for j in range(1,i+1):
            print(" *",end="")

    print()
"""
n = int(input("Enter the number : "))

for i in range(1,n+1):

    print(" "*(n-i),end=" ")

    print(" *"*i)

for i in range(n-1,0,-1):

    print(" "*(n-i),end="")  

    print(" *" * (2*i-1))  