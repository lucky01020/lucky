
# # d = {'a':100,'b':200,'c':300}
# # d2 = {'a':300,'b':200,'d':400}

# # d3 = {}

# # for i ,value in d.items():
# #     d3[i] = value
# # for i, value in d2.items():
# #     if i in d3:
# #         d3[i]+=value
# #     else:
# #         d3[i]=value
# # print(d3)
# """
# # """
# # d = {'1':['a','b'],'2':['c','d']}

# # for i in d ['1']:
# #     for j in d ['2']:
# #         print(i + j,end = " ")


# l = [12,12,23,45,45,22,90]

# l1 = []

# for i in l:
#     if i not in l1:
#         l1.append(i)

# print(l1)

d = {'a':100,'b':200}
d1 = {'a':200,'b':100}

d3 = {}

for i, value in d.items():
    d3[i] = value

for i,value in d1.items():
    if i in d3:
        d3[i] += value
    else:
        d3[i]= value

print(d3)        





