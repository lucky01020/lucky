// Area of Rectangle
#include<stdio.h>

main()

{
	int area,w,l;  //data members
	
	printf("Enter width:");
	scanf("%d",&w);
	
	printf("Enter length:");
	scanf("%d",&l);
	
	area=w*l;    //applying formula of area of rectangle
	
	{
		printf("area of rectangle is:%d",area);
	}
}

