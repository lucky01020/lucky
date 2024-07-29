//Write a program of to swap the two values using templates 

#include<iostream>

using namespace std;

template<typename T>  //using template 

T value(T a, T b)   
{
	T temp;
	
	temp=a;     //swapping the variables
	a=b;
	b=temp;
	
	cout<<"After swapping A:"<<a<<" B   :"<<b<<endl;
}

main()
{

 value<int>(10,8);   
}

