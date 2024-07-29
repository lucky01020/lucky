/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) */

#include<iostream>

using namespace std;

class person{           //creating class of the name of person
	protected:
		
		string name;
		int age;
		
		public:
			
		fun1()
		{
			cout<<"Enter the name:"<<endl;
			cin>>name;
			
			cout<<"Enter the Age:"<<endl;
			cin>>age;                      //taking user input of name and age
		}
				
};
class student:public person{    //inheriting the class person
	 private:
	 	float percentage;  //using float for percentage
	 	public:
	 		fun2()
	 		{
	 			cout<<"Enter the percentage:"<<endl;
	 			cin>>percentage;
			 }
			 fun3()
			 {
			 	cout<<"**STUDENT DATA**"<<endl;
			 	cout<<"Name:"<<name<<endl;
			 	cout<<"Age:"<<age<<endl;
			 	cout<<"percentage:"<<percentage<<endl;  //taking data of student 
			 }
};

class Teacher:public person{   //inheriting the class person
	private:
		int salary;
		public:
			fun4()
			{
				cout<<"**TEACHERS DATA**"<<endl;
				cout<<"Name:"<<name<<endl;
			 	cout<<"Age:"<<age<<endl;
				cout<<"Enter the salary:"<<endl;
				cin>>salary;                      //taking data of teacher
			}
			fun5()
			{
			 cout<<"Teachers salary:"<<salary<<endl;
			 	
			}
};

main()
{

 student obj;  //object of student class
 obj.fun1();
 obj.fun2();
 obj.fun3();
 
 Teacher mm;   //object of teacher class
 mm.fun1();
 mm.fun4();
 mm.fun5();
}

	
