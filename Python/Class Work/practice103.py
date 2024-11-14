from tkinter import *

def login1():

    root = Tk()
    root.geometry("500x500")
    root.title("Login page!!")

    email = Label(root,text="Email",font=("Calibri",20,"bold"))
    email.place(x=50,y=100)

    password = Label(root,text="Password",font=("Calibri",20,"bold"))
    password.place(x=50,y=150)
   
    eemail = Entry(root,bg="Lightblue")
    eemail.place(x=270, y=110)

    epassword = Entry(root,bg="Lightblue")
    epassword.place(x=270, y=160)

    
