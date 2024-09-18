//WAP to create simple calculator using class 

#include<iostream>

using namespace std;

class A{                                //creating class
	 public:
	 	int a,b;              //datamembers
	 	fun1()    //creating function
	 	{
	 		cout<<"Enter the A :"<<endl;
	 		cin>>a;
	 		cout<<"Enter the B:"<<endl;
			cin>>b;
			cout<<"Addition:"<<a+b<<endl;    //adding numbers
		 }
		fun2()
		{
		cout<<"Enter the A:"<<endl;
	 		cin>>a;
	 		cout<<"Enter the B:"<<endl;
			cin>>b;
			cout<<"subtraction:"<<a-b<<endl;	//subtracting 
		 } 
		fun3()
		{
		cout<<"Enter the A:"<<endl;
	 		cin>>a;
	 		cout<<"Enter the B:"<<endl;
			cin>>b;
			cout<<"Multiplication:"<<a*b<<endl;	//multiplying 
		 }
		 fun4()
		 {
		 cout<<"Enter the A:"<<endl;
		 cin>>a;
		 cout<<"Enter the B:"<<endl;
		 cin>>b;
		 cout<<"Division:"<<(float)a/b<<endl; //division with using float
			
		 }
};
main()
{
	A obj;               //creating object
	obj.fun1();
	obj.fun2();
	obj.fun3();
	obj.fun4();    //calling function
}

