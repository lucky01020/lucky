
foods = []
prices = []

total = 0

while True:
    food = input("Enter the food to buy (Press e to exit ) : ")
    if food.lower() == 'e':
        break
    else:
        price = int(input("Enter the price of food :"))

    foods.append(food)
    prices.append(price)   

print("-----Your Total Bill-----")

for food in foods:
    print(food,end="")

for price in prices:
    total = total+price
print()
print(f"Your total bill is {total}")

"""
menu = {'Pizza': 70,
        'Burger':65,
        'Coca-Cola':49,
        'Fries' : 39,
        'Popcorn': 80}

cart = []
total = 0

print("-------Menu------")

for key,values in menu.items():
    print(f"{key:10} {values:}")

while True:
    food = input("Enter the Food from the menu (press e for exit ): ")
    if food.lower()=="e":
        break
    elif menu.get(food) is not None:
        cart.append(food)

for food in cart:
    total= total+menu.get(food)
    print(food,end=" ")
print()
print("---------------------------------")    

    
print(f"Your Total bill is {total} rupees")    
        
 """   


