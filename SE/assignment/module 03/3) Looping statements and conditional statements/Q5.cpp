//5) WAP to print factorial of given number...

#include<stdio.h>

main()

{
	int n,i,fact=1;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	for (i=n;i>=1;i--)
	
	{
		fact=fact*i;
	}
	printf("\n %d factorial ",fact);
	
	
}
