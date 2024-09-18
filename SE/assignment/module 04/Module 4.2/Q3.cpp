// Write a program to find the multiplication values and the cubic values using 
//inline function

#include<iostream>

using namespace std;

class A{
	public:
		inline multiplication(int x, int y)  //taking two integers for multiplication
		{
			return (x*y);     
		}
		inline cube(int z)
		{
			return (z*z*z);   //multiplying three times for cube
		}
};



main()
{
	A obj;
	int x,y;
	cout<<"Enter the number1:"<<endl;
	cin>>x;
	
	cout<<"Enter the number2:"<<endl;
	cin>>y;                             //taking user input for multiplication
	
	cout<<"Multiplication:"<<obj.multiplication(x,y)<<endl;
	cout<<"Cube of X:"<<obj.cube(x)<<endl;
	cout<<"Cube of y:"<<obj.cube(y)<<endl;           
	
	
}
