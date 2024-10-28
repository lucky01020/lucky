#Write a Python function to calculate the factorial of a number

def factorial(n): #creating function

    if n < 0 :
        return "Must be non negative integer" #number should be non negative
    
    fact = 1
    for i in range(2, n+1):
        fact = fact*i   #calculating factorial
    return fact

n1 = int(input("Enter the number : ")) #user input

result = factorial(n1)

print("Answer : ",result) #printing result


        
        
    