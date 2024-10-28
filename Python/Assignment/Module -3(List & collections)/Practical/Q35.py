#Write a Python function to check whether a number is in a given range 

def inrange(n):

    s = int(input("Enter the starting number : "))
    e = int (input("Enter the ending number : ")) # starting and  ending number

    if s <=n <=e: #condntion for checking number is in range
        print(f"{n} is in the range betweem {s} and {e} ")
    else:
        print("Not in range!!")

n = int(input("Enter the number : ")) #user input

inrange(n)  #calling function      
