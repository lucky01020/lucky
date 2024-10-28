#Write a Python program to read a random line from a file. 

import random

file= open("C:\\Users\\Admin\\Documents\\c programming\\lucky\\Python\\Assignment\Module -3(List & collections)\\test1.txt","r")

lines = file.readlines()

randomline= random.choice(lines)

print("Random : ",randomline)