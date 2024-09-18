//Write a program of to sort the array using templates. 

#include<iostream>

using namespace std;

template<typename T>

class A{        //creating class
	public:
		
		T a[10];   //ussing arrayyy
		T i;
		T j;
	
		
		T fun()
		{
		
		for(i=0;i<=5;i++)   //using loop for pattern
		{
			for(j=0;j<=i;j++) 
			{
				cout<<"*";  //printing star pattern
			}
			
			cout<<"\n";
			
		}
		
}
	
};

main()
{
	A<int>obj;  
	obj.fun(); 
}

