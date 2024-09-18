//Write a program to calculate the area of circle, rectangle and triangle using 
//Function Overloading 

#include<iostream>

using namespace std;

class A{
	public:
		
		fun1(int radius) 
		{
			cout<<"Area of circle:"<<3.14*radius*radius<<endl;
		}
		fun1(int length, int height) //applying formula of area of circle
		{
			cout<<"Area of rectangle:"<<length*height<<endl;
		}
		fun1(int base, float height)
		{
			cout<<"Area of triangle:"<<base*height*0.5<<endl;
		}
		//taking different data types for function overloading
};


main()
{
	int radius,length,height,base,height1;
	
	A obj;                            //creating object
	cout<<"Enter the radius:"<<endl;
	cin>>radius;
	obj.fun1(radius);
	
	cout<<"Enter the lenght:"<<endl;
	cin>>length;
	
	cout<<"Enter the height:"<<endl;
	cin>>height;
	
	obj.fun1(length,height);
	
	cout<<"Enter base:"<<endl;
	cin>>base;
	
	cout<<"Enter height:"<<endl;
	cin>>height1;
	
	                                 //taking user input for the formula
	
	obj.fun1(base,(float)height);
	
}
