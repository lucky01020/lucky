#Write a Python function that takes two lists and returns true if they have 
#at least one common member.

def common_number(list1,list2): #creating function 
    for i in list1:             
        if i in list2:  #condition for common number for each member of list
            return True #returning true
        
    return False #returning false if there is not a common memeber

list1=[1,2,3,4,5]
list2=[5,6,7,8,9]

print(common_number(list1,list2))

