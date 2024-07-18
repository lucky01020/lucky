//9)Write a program make a summation of given number...

#include<stdio.h>

main()

{
	int n,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n!=0)  //loop is running until number is zero
	
	{
		sum=sum+n%10; //
		n=n/10;
	}
	printf("Sum of number is %d",sum);
}
