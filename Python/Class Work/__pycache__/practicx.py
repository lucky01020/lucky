# class A:
#     def myfun():
#         print("Yo")

# class B(A):
#     def myfun1():
#         print("yo2")

# obj = B
# obj.myfun()
# obj.myfun1()        


# class A:
#     def myfun():
#         print("meow")

# class B(A):
#     def myfun1():
#         print("bhow")

# class C(B):
#     def myfun2():
#         print("chuppp")

# obj = C
# obj.myfun()
# obj.myfun1()
# obj.myfun2()        


# class A:
#     def myfun():
#         print("helloo its me")

# class B:
#     def myfun1():
#         print("byee")

# class C(B,A):
#     def myfun2():
#         print("See you")

# obj = C
# obj.myfun()

# obj.myfun2()
# obj.myfun1()
                      

class A:
    def myfun():
        print("hi")

class B(A):
    def myfun1():
        print("Bye")

class C(A):
    def myfun2():
        print("See you")

obj = B
obj.myfun()
obj.myfun1()

obj1 = C

obj1.myfun2()