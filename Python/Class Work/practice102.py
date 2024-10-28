import pymysql

mydb = pymysql.connect(host="localhost",user="root",password="")
mycursor = mydb.cursor()

mycursor.execute("create database if not exists lucky101")
mydb.commit()

mydb = pymysql.connect(host="localhost",user="root",password="",database="lucky101")
mycursor = mydb.cursor()

mycursor.execute("create table if not exists sunrise11 (id int primary key auto_increment,name varchar(30),email varchar(50) unique key,password int )")
mydb.commit()






