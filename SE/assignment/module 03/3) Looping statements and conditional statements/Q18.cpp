//Write a C Program to Print the Multiplication Table of N//



#include<stdio.h>

main()

{
	int i,n;  //data members//
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	for (i=1;i<=10;i++)  //using loop//
	
	{
		printf("\n%d * %d = %d ",n,i,n*i);
	}
	
}
