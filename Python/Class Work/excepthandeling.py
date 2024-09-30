"""
try:
    n = int(input("Enter the number:"))
    n1 = int(input("Enter the second number:"))
    print("Addition:",n+n1)
except ValueError as e:
    print(e)
else:
    print("try and else are executed")
finally:
    print("Thank you")
"""
"""
try:
    l = [1,2,1,2]
    n=int(input("Enter the number:"))

    print("value is: ",l[n])
except IndexError as e:
    print(e)
"""
try:
    n =int(input("Enter the number:"))
    n1=int(input("Enter the number:"))

    print("division :",n/n1)
except:
    print("Invalid input")        

