#Write a Python program to count the frequency of words in a file.

word_c = {}

file = open("hello1.txt","r")

for i in file: #taking loop

    words = i.split()   #spliting the word

    for j in words: #taking another loop for lowering the word

        j = j.lower()

        if j in word_c:
            word_c[j] += 1 
        else:
            word_c[j] = 1


print(word_c)   #printing the results       

