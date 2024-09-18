/*Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/

#include<iostream>

using namespace std;

class Mathematic{
	public:
		fun1(int a, int b)
		{
		cout<<"Addition:"<<a+b<<endl;	
		}
		fun1(float a, float b)
		{
			cout<<"subtraction:"<<a-b<<endl;
		}
		fun1(double a, double b)
		{
			cout<<"Multiplication:"<<a*b<<endl; //taking different name of data types 
		}
		fun1(int a, float b)
		{
			cout<<"Division:"<<a/b<<endl;  //created same name of function for function overloading
		}
};

main()
{
	Mathematic obj;
	obj.fun1(20,30);
	obj.fun1((float)20,(float)5);
	obj.fun1((double)6,(double)5);
	obj.fun1((int)30,(float)15);  //calling all functions
}
