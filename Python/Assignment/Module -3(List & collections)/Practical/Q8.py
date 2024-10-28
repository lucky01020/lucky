#Write a Python function that takes a list and returns a new list with unique 
#elements of the first list. 

def uniquelist(input_list): 
    return list(set(input_list))

l = [1,1,2,3,4,4,5,5]

list1= uniquelist(l)
print(list1)