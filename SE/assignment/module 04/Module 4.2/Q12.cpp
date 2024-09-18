//Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>

using namespace std;

class Image{
	 
	 int height,width;  //data members
	 
	 public:
	 	
	 	Image(int h=0,int w=0)   
	 	{
	 		height=h;        
	 		width=w;
		 }
		Image operator+(Image const &obj) //using operator for addition
		{
		
		
		Image result;                   //taking variable
		
		result.height=result.height+obj.height;  //adding with the help of variable
		result.width=result.width+obj.width;
		
		return result;
	}
		
		void print()
		{
			cout<<"\n\t"<<height<<"  "<<width; //applying in matrix form
				 }		 
};

main()
{
	Image obj(100,50),obj2(50,20);  
	Image obj3=obj+obj2;
	obj3.print();
	
}

