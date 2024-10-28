"""#Write a Python program to count the number of strings where the string 
length is 2 or more and the first and last character are same from a given 
list of strings.
"""
s = ("lol","sir","lol","car","sour") #taking strings

count = 0   #counting from zero

for i in s:  #counting each letter from the string
    if len(i) >= 2 and i[0] == i[-1]: #giving indexes for first and last character
        count+=1
print("first and last character of string : ",count) #printing result