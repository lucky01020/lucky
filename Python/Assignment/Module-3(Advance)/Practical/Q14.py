#Write a Python class named Circle constructed by a radius and two 
#methods which will compute the area and the perimeter of a circle 

class Circle: #taking class

    def area(self,radius): #passing parameters

        print(f"{3.14*radius*radius} : Area of circle") #formula of area of circle

    def perimeter(self,radius):

        print(f"{2*3.14*radius} : Area of perimeter") #formula of area of perimeter

r = int(input("Enter the radius : ")) #taking using input

obj = Circle() #creating object

obj.area(r)

obj.perimeter(r)