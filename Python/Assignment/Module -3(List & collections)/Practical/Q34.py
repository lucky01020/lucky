#Write a Python function to calculate the factorial of a number

def factorial(n):

    if n < 0 :
        return "Must be non negative integer"
    
    fact = 1
    for i in range(2, n+1):
        fact = fact*i
    return fact

n1 = int(input("Enter the number : "))

result = factorial(n1)

print("Answer : ",result)


        
        
    