from tkinter import *
from tkinter import messagebox
from practice103 import * 
import pymysql       
root = Tk()

def insert():
    name=ename.get()
    email=eemail.get()
    password=epassword.get()
    cpassword=ecpassword.get()

    if password==cpassword:
        mydb=pymysql.connect(host="localhost",user="root",password="",database="lucky101")
        mycursor=mydb.cursor()

        sql = "insert into sunrise11(name,email,password)values ('%s','%s','%s')"
        args = (name,email,password)
        mycursor.execute(sql%args)
        mydb.commit()

        print("Data inserted succesfully!!")
        messagebox.showinfo("Sucess","Data inserted Succesfully")

        mycursor.close()
        mydb.close()

    else:
        print("Both passwords are not same!!")
        messagebox.showwarning("Incorrect Password","Both passwords are not same")
           


    

root.geometry("500x500")
root.title("Signup Form!!")

name = Label(root,text="Name",font=("Calibri",20,"bold"))
name.place(x=50,y=50)

email = Label(root,text="Email",font=("Calibri",20,"bold"))
email.place(x=50,y=100)

password = Label(root,text="Password",font=("Calibri",20,"bold"))
password.place(x=50,y=150)

cpassword = Label(root,text="Confirm Password",font=("Calibri",20,"bold"))
cpassword.place(x=50,y=200)

ename = Entry(root,bg="Lightblue")
ename.place(x=270, y=60)

eemail = Entry(root,bg="Lightblue")
eemail.place(x=270, y=110)

epassword = Entry(root,bg="Lightblue")
epassword.place(x=270, y=160)

ecpassword = Entry(root,bg="Lightblue")
ecpassword.place(x=270, y=210)

button = Button(root,text="Submit",font=("Calibri",20,"italic","bold"),command=insert)
button.place(x=320,y=260,height="50",width="100")

Login = Button(root,text="Login",font=("Calibri",20,"italic","bold"),command=login1)
Login.place(x=320,y=320,height="50",width="100")

root.config(bg="pink")


root.mainloop()