""""
class A:   # class is a collection of data members and members function

    def div(self):

        n = int(input("Enter the number : "))
        n1 = int(input("Enter the second number : "))

        print("Result : ",n/n1)


obj = A()   #object is instance of class through which we can access all the properties of classs
obj. div() 
"""
"""
class A:   # when one class derives the properties to another class it is called inheritance

    def hello(self):

     print("This is single inheritance!!")

class B(A):

       def hello1(self):

           print("Thank you!!")

obj = B()
obj.hello()
obj.hello1() 
"""               