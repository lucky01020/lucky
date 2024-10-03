"""
Write a Python program to find the first appearance of the substring 
'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the 
whole 'not'...'poor' substring  with 'good'. Return the resulting string."""

s  = input("Enter the string:")

s1=s.find('not')
s2=s.find('poor')  #finding the words "not" and "poor"

if s1<s2:
    result = s[:s1]+'good'+s[s2+4:]
else:
    result=s 

print("After replacing::",result)       #printing result
