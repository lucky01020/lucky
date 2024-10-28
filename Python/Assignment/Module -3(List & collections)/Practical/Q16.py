#Write a Python program to check whether an element exists within a tuple.


t = [12,23,34,45,56]

element_check = 34

if element_check in t:    #checking whether element is there or not
    print(f"{element_check} exist in the tuple") #printing the result
else :
    print("Not exist in the tuple")

another_element = 57

if another_element in t:
    print(f"{another_element} exist in the tuple")
else :
    print("not exist in the tuple")
