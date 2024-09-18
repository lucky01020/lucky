//Check whether a number is negative,positive or zero

#include<stdio.h>

main()
{
	int a;
	
	printf("Enter a number");
	scanf("%d",&a);
	
	if (a==0)
	
	{
		printf ("the number is zero");
	}
	else if (a>0) 
	{
	  printf("The number is positive");
	}
	else
	{
		printf("The number is negative");
	}
}
