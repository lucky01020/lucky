//14.Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>

main()

{
	int a,b,z,d,e,i,fact;  //data members
	
	printf("Enter the number:");
	scanf("%d",&a);
	
	printf("Enter the number:");
	scanf("%d",&b);
	
	printf("Enter the number:");
	scanf("%d",&z);
	
	printf("Enter the number:");
	scanf("%d",&d);
	
	printf("Enter the number:");
	scanf("%d",&e);
	
	for (i=1;i<=a;i++) //using loop
	{
		fact=fact*i;
	}
	printf("\n Factorial is %d",fact);
	
	fact=1;
	for (i=1;i<=b;i++)   //using loop
	{
		fact=fact*i;   //calculating factorial
	}
	printf("\n Factorial is %d",fact);
	
	fact=1;
	for (i=1;i<=z;i++) //using loop
	{
		fact=fact*i;
	}
	printf("\n Factorial is %d",fact);
	
	fact=1;
	for (i=1;i<=d;i++)  //using loop
	{
		fact=fact*i;
	}
	printf("\n Factorial is %d",fact);
	
	fact=1;
	for (i=1;i<=e;i++)  //using loop
	{
		fact=fact*i;
	}
	printf("\n Factorial is %d",fact);
}
