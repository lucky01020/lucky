//4) WAP to print table upto given number..
#include<stdio.h>

main()

{
 int	i,n;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	for (i=1;i<=10;i++)
	
	{
		printf("\n%d*%d=%d",n,i,n*i);
	}
}
