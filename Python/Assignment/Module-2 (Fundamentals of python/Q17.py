#Write a Python function that takes a list of words and returns the length 
#of the longest one. 

def long(word): #creating function 
    l=0
    for i in word:
       if len(i)>l:
           l=len(i)
    return l

out = input("Enter list seperated by spaces").split() #splitting words using split 
print(long(out))   #print result     



    





