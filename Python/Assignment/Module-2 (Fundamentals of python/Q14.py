#Write a Python program to get a single string from two given strings, 
#separated by a space and swap the first two characters of each string.  

s = input("Enter the string:")
s1= input("Enter the second string:")

if len(s)<2 or len(s1)<2:
    print("both string atleast two characters")
else:
    new_s = s[:2]+ s1[2:]
    new_s1= s1[:2]+ s[2:]

print(new_s," ",new_s1)        