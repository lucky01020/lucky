#Write a Python program to select an item randomly from a list.

import random
l = ["apple","banana","grapes","mango","pineapple"]

random_fruit = random.choice(l)

print(random_fruit)