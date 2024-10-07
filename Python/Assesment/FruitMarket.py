import logging  #logging to fetch the details for time

file = open("C:\\Users\\Admin\\Documents\\c programming\\ fruit.txt","w") #writing content in file management
file.close()

logging.basicConfig(filename='application.log', level=logging.INFO,format='%(asctime)s %(message)s')
d = {}
def fruitmarket():                    #creation of function 
    menu = """
                Welcome to Fruit Market

                1) Manager
                2) Customer

            """
    print(menu)
        
    roll = int(input("Select your role: "))   #asking user for role
    while True:
        

        if roll == 1:                    #for manager
            manager = """
                    Fruit Market Manager       

                1) Add Fruit stock
                2) View Fruit stock
                3) Update Fruit stock 
                    """ 
            print(manager)

            choice = int(input("Enter your choice: "))   #asking user for fruit stock

            if choice == 1:
                print_message = "Add Fruit stock"  # Changed variable name
                print(print_message)  # You can print it if needed
                Fruit = input("Enter Fruit Name: ")
                quantity = int(input("Enter qty in Kg: "))
                price = int(input("Enter price: "))

                total = f" \n Fruit_name:{Fruit} \nQuantity:{quantity} \nPrice:{price}"  #creation of fM 
                file=open("C:\\Users\\Admin\\Documents\\c programming\\ fruit.txt","a") #adding details (append)
                file.write(total)
                file.close()
                logging.info(total)

                d[Fruit] = {'qty': quantity, 'Price': price}

                n1 = input("Do you want to perform more operations: press y for yes and n for no ") 

                if n1=="y":
                    continue     #asking user if they want to continue or not

                else:
                    break
               


            
            elif choice == 2:  #for view stock to see the details of stock
                if d:
                    print(d) 
                else:
                    print("no stock")
                    file=open("C:\\Users\\Admin\\Documents\\c programming\\ fruit.txt","r")
                    file.readline()   #reading through the file management
                    file.close()




            elif choice == 3:     #asking user to update the stock
                print("Update Fruit stock")
                Fruit = input("Enter Fruit Name: ")

                if Fruit in d:
                    quantity = int(input("Enter qty in Kg: "))
                    price = int(input("Enter price: "))
                    d[Fruit] = {'qty': quantity, 'Price': price}   
            
                else:
                    print("This fruit is not in stock please add first") 


fruitmarket()    #calling the function    