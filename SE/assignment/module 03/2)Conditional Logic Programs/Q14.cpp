//find the largest number of three numbers...
#include<stdio.h>

main()

{
	int a,b,c;
	
	printf("Enter A:");
	scanf("%d",&a);
	
	printf("Enter B:");
	scanf("%d",&b);
	
	printf("Enter C:");
	scanf("%d",&c);
	
	if (a>b && a>c)
	{
		printf("A is largest number %d",a);
	}
	else if (b>a && b>c)
	{
		printf("B is largest number %d",b);
	}
	else 
	{
		printf("C is the largest %d",c);
	}
}
