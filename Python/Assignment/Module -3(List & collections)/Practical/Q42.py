#Write a Python program to calculate surface volume and area of a cylinder  

# Write a Python program to calculate surface volume and area of a cylinder 
# Surface Area = 2πr² + 2πrh
# Volume = πr²h

                               # Get the Radius value from user.
r = float(input("Enter a Radius  : "))

                          # Get the Height value from user.
h = float(input("Enter a Height  : "))

                   # Calculate the Surface Area of Cylinder
a = 2*3.14*r*(r+h)

                       # Calculate the Volume of Cylinder
v = 3.14*r*r*h

print("Surface Area of Cylinder : ",a)

print("Volume of Cylinder       : ",v)