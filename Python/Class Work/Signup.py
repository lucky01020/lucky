try:
     import random

     d = {}
     while True:
          menu = """
          press 1 for signup
          press 2 for login
          press 3 for forgot-password
          press 4 for Exit
          """

          print(menu)

          choice = int(input("Enter the choice:"))

          if choice==1:
               print("*"*50,"WELCOME TO SIGN UP","*"*50)
               name=input("Enter name:")
               email=input("Enter Email:")
               mobile=int(input("Enter the mobile number:"))
               password=int(input("Enter the password:"))
               cpassword=int(input("Enter Confirm password:"))

               if password==cpassword:
                    d['name']=name
                    d['email']=email
                    d['mobile']=mobile
                    d['password']=password
                    print("Signup succesfully!!")
               else:
                    print("password & confirm password does not match!!")

          elif choice==2:
               print("*"*50,"Welcome to login page","*"*50)
               email=input("Enter Email:")
               password=int(input("Enter the password:"))

               if d['email']==email and d['password']==password:
                    print("login succesfully!!")
               else:
                    print("Invailid credentials!!")

          elif choice==3:
               mobile=int(input("Enter mobile number:"))  

               otp = random.randint(1000,9999)

               if d['mobile']==password:
                    print("*"*50,"Your OTP is",otp,"*"*50)

                    uotp=int(input("Enter otp:"))

                    if uotp==otp:
                         password = int(input("Enter new password:"))
                         d['password']=password
                         print("password change succesfully!!")

          elif choice==4:
               print("Thank you!!")
               break

          else:
               print("invalid choice!!")
except:
     print("Invalid input")                             




               
                    
               
               
          

