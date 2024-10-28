#Write a Python function that checks whether a passed string ispalindrome or not

def palindrome(s):

    s1 = s[::-1]

    return s == s1

s2 = input("Enter the string :")

if palindrome(s2):
    print("It is palindrome!!")
else:
    print("not palindrome!!")    