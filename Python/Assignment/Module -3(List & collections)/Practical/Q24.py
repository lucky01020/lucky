#Write a Python script to check if a given key already exists in a dictionary. 


d ={'a':1,'b':2,'c':3} #create dictionary

key_to_check = 'b'  

if key_to_check in d:  #checking whether key exists or not 
    print(f"{key_to_check} exist in dict")
else :
    print(f"{key_to_check} does not exist in dict") #printing results

another_key = 'e'

if another_key in d:
    print(f"{another_key} exist in dict")
else :
    print(f"{another_key} does not exist in dict")