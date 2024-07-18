//Circumference of triangle
#include<stdio.h>

main()
{
	int a,b,c,triangle ; //data members
	
	printf("Enter A:");
	scanf("%d",&a);
	
	printf("Enter B:");
	scanf("%d",&b);
	
	printf("Enter C:");
	scanf("%d",&c);
	
    triangle=a+b+c;   //applying formula of triangle
	
	{
		printf("circumference of triangle:%d",triangle);
		}	
}
