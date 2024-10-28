#Write a Python program to combine values in python list of dictionaries. 

d = [{'item': 'item1', 'amount': 400},
    {'item': 'item2','amount': 300},
    {'item': 'item1','amount': 750}]

d1 = {}

for i in d:
    item = i['item']
    amount = i['amount']

    if item in d1:
        d1[item]+=amount
    else:
        d1[item]=amount

print(d1)
