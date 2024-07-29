//Write a program to concatenate the two strings using Operator Overloading 


#include<iostream>

using namespace std;

class Image{
	 
	 string name;   //taking string 
	 
	 public:
	 	Image(){
		 };
	 	
	 	Image(string h)   //parameter
	 	{
	 		name=h;   
	 	
		 }
		Image operator+(Image obj) //using operator function
		{
		
		
		Image result;   
		
		result.name=name+obj.name;
	
		
		return result;
	}
		
		void print()
		{
			cout<<"\n\t"<<name<<endl;
				 }		 
};

main()
{
	Image obj("Lucky"),obj2("Tiwari");
	Image obj3=obj+obj2;
	obj3.print();
	
}

