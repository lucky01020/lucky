//23. C Program to Reverse a Number Using FOR Loop

#include<stdio.h>

main()

{
	int i,n;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	for (i=n;i>=1;i--)
	{
		printf("\n%d",i);
	}
}