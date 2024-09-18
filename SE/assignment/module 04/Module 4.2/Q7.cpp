/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>

using namespace std;
 
class Students{
	 public:                 
	 	 
	 	 int roll;
	 	 public:
	 	A()
	 	{
	 	 cout<<"Enter the roll number:"<<endl;  //taking user data for roll number
		  cin>>roll;
		  
		  	
		 }
}; 
class Test:public Students{   //inheriting the student class
	public:
		int x,y;         //data members
		public:
		B()
		{
			cout<<"Marks in maths:"<<endl;
			cin>>x;
			
			cout<<"Marks in science:"<<endl;
			cin>>y;                       //subjects data
			}	
};

class Results:public Test{
	 public:
	 	int total;
	 	public:
	 		C()
	 		{
	 			cout<<"Roll number"<<roll<<endl;
	 			cout<<"Maths:"<<x<<endl;
	 			cout<<"Science:"<<y<<endl;
	 			cout<<"Total marks:"<<x+y<<endl;  //addition of marks in subjects
			 }
};



main()
{
	Results obj;    //creating object of results
	obj.A();
	obj.B();
	obj.C();
}
