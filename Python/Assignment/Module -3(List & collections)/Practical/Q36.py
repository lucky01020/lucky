#Write a Python function to check whether a number is perfect or not. 

def perfect(n):

    if n <= 1:

        return False

    number = 0

    for i in range (1,n):

        if n % i == 0: #checking number is perfect or not
            number +=  i 

    return number == n
try:
 n1 = int(input("Enter the number : ")) #user input 

 if perfect(n1):
      print("Number is perfect")
 else :
    print("Not perfect number!!")  #printing results
except(ValueError) :
   print("must be an integer!!")       




    
    
