//area of circumference of circle
#include<stdio.h>
main()

{
	float radius,area,circumference; //data members
	
	printf("enter radius:");
	scanf("%f",&radius);
	
	area=3.14*radius*radius; 
	circumference=2*3.14*radius; //applying formula of circumference
	
	printf("\n area of circle %.2f",(float)area);
	printf("\n circumference of circle :%.2f",(float)circumference);
	
}
