
# n = input("Enter something : ")


# n1 = n[::-1]

# if n1==n:
#     print("It is palindrome")
# else:
#     print("Not palindrome")  


l = [12,23,23,45,11,10,10]

l1 = []

for i in l:
    if i not in l1:
        l1.append(i)

print(l1)
       

# l = [1,2,3,4,5]

# l1 = [4,5,6,7]

# l2 = []

# for i in l:
#     if i in l1 not in l2:
#         l2.append(i)
# print(l2)  

d1 = {'a':200,'b':300,'c':200}
d2 = {'a':200, 'b':200, 'd':100}

d3 = {}

for i , value in d1.items():
    d3[i]= value

for i,value in d2.items():
    if i in d3:
        d3[i]+=value

    else:
        d3[i]=value    

print(d3)            