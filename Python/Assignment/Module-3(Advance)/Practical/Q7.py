#Write a python program to find the longest words.

file = open("hello1.txt","r")

lines = file.read()

lines1 = lines.split() #spliting every word

longest_word = max(lines1,key=len) #finding the longest word byv using the length of key

print(longest_word)