//Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>

using namespace std;

class A{
	public:
		A()                                        //constructor
		{
		    int a,b;
		    cout<<"Enter the number 1:"<<endl;
		    cin>>a;
		    
		    cout<<"Enter the number 2:"<<endl;   //taking user input
		    cin>>b;
		    
		    cout<<"Addition:"<<a+b<<endl;
		    cout<<"Subtraction:"<<a-b<<endl;
		    cout<<"Multiplication:"<<a*b<<endl;   
		    cout<<"Division"<<(float)a/b<<endl;     
		}
};


main()
{
	A obj;                              //object
}
