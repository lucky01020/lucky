//Write a Program of Two 1D Matrix Addition using Operator Overloading 

#include<iostream>

using namespace std;

class Image
{
  int height, width; //data members
  
  public:
       Image(int h=0, int w=0)
	   {
	   	height=h;
	   	width=w;
		 }
		Image operator+(Image const &obj)     //using operator for addition
		{
			Image result;
			
			result.height=height+obj.height;   //applying conditions
			result.width=width+obj.width;
			
			return result;
			 }
			void print()
			{
				cout<<"\n\t"<<height<<"\t"<<width;   //applying matrix
				  }  	
};

main()
{
	Image I1(200,50), I2(50,15);
	Image I3= I1+I2;
	I3.print();
}
  
