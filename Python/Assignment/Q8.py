#Write a Python program that will return true if the two given integer 
#values are equal or their sum or difference is 5. 

n=int(input("Enter the number:"))

n1=int(input("Enter the second number:"))  #user input

if n==n1 or n+n1==5 or n-n1==5:  #applying condition for difference is 5
     print("True")
else:    
     print("false")     