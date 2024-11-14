#Write python program that user to enter only odd numbers, else will raise an exception. 

def odd_number(): #creating function
    while True:
        try:
        
            n = int(input("Enter the number : ")) #user input

            if n%2==0:  #only odd numbers
                raise ValueError("The number is even!!,Please enter the odd number : ") 
            
            print("The number is odd!!")
            break
        except ValueError as l:
          print(l)    

odd_number()  #calling the function          

