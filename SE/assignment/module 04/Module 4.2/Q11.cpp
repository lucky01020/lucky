//Write a program to find the max number from given two numbers using friend function 

#include<iostream>

using namespace std;

class A{
	public:
		int a,b;   //data members
		
		friend fun1(A &t);  //using friend function 
};

   fun1(A &t) //
   {
   	cout<<"Enter the A:"<<endl;
   	cin>>t.a;
   	
   	cout<<"Enter the B:"<<endl;   //taking users input
   	cin>>t.b;
   	
   	if(t.a>t.b)
   	{
   		cout<<"A is greater:"<<t.a<<endl;
	   }
	 else if(t.a<t.b)
	 {
	 	cout<<"B is greater:"<<t.b<<endl;
	   }
	  else 
	  {
	  	cout<<"Both are equal"<<endl;  //applying conditions
		 }   
   }
   
   main()
   {
   	A obj;      
   	fun1(obj); //passing arguments
   }
