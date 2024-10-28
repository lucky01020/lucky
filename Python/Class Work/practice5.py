class A:
    def myfun(self):
        print("Hello")

class B(A):
    def myfun(self):
        super().myfun()
        print("Welcome") 

class C(B,A):
    def myfun(self):
        super().myfun()
        print("Namaste!")

class D(C):
    def myfun(self):
        super().myfun()
        print("Jai shree ram!!") 

obj = D()
obj.myfun()                              