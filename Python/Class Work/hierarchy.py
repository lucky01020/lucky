class A :

    def myfun(self):
        self.a= 15
        self.b= 20       

class B(A):

    def myfun1(self):
        print("Addition : ",self.a + self.b)
      

class C(A):

    def myfun2(self):
        print("subtraction : ",self.a - self.b)

obj = B()
obj.myfun()
obj.myfun1()

obj_c= C()
obj_c.myfun()
obj_c.myfun2()




      

    







        



        
        
       


