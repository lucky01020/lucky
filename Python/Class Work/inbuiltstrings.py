"""
s = "Lucky Tiwari"

print(s.center(20,"@"))
print(s.isascii())
print(s.isidentifier())
print(s.isspace())
print(s.swapcase())
print("-".join(s))
"""
"""
l=[]
ev=[]
od=[]
for i in range(1,31):
    l.append(i)
    if i%2==0:
        ev.append(i)
    else:
        od.append(i)

print(l)
print(ev)
print(od)
"""
"""
n=int(input("Enter the length of list:"))            
l=[]
for i in range(1,n+1):
        n1=int(input("Enter the elements:"))

        l.append(n1)


print(l)

for i in range(0,len(l)):
    for j in range(i+1,len(l)):
        if l[i]>l[j]:
             temp=l[i]
             l[i]=l[j]
             l[j]=temp

l2=[]
for i in range(0,len(l)):
    print(l[i])
    l2.append(l[i])

print(l2)

print("Smallest:",l2[0])
print("Largest:",l2[-2])
"""

""""
l=[1,2,1.43,"hello","welcome",True,45,11,11,11]
l.append(100)
print(l)

l.extend([200,100,10])
print(l)

print(l.index(11))
"""
l=[23,32,11,55,24]

l.sort()

print("second smallest:",l[2])
print("second largest:",l[-2])

