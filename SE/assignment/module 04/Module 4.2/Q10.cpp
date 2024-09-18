//Write a program to swap the two numbers using friend function without using third variable

#include<iostream>

using namespace std;

class A{
	public:
		int a,b;   //data members
		
		friend fun1(A &t);  //using friend function
};
   
   fun1(A &t)
   
   
   {
   	cout<<"Enter the A"<<endl;
   	cin>>t.a;
   	
   	cout<<"Enter the B"<<endl;
   	cin>>t.b;                       //taking user input
   	
   	t.b=t.a*t.b;
   	t.a=t.b/t.a;              //putting conditions for swapping
   	t.b=t.b/t.a;
   	
   	cout<<"A :"<<t.a<<endl;
   	cout<<"B :"<<t.b<<endl;
   	
   }
   
main()
{
	A obj;
	fun1(obj);    //passing arguments
}

