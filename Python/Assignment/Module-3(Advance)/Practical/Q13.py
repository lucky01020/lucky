#Write a Python class named Rectangle constructed by a length and 
#width and a method which will compute the area of a rectangle

class Rectangle: #creating class

    def __init__(self,length,width): #took constructor

        self.length = length
        self.width = width

    def area(self): 

        return self.length*self.width  #formula of area of rectangle  

c = Rectangle(10,20)

print(c.area()) #printing results


