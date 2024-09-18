//10)Write a program you have to make a summation of first and last Digit

#include<stdio.h>

main()

{
	int n,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	sum=n%10;
	while (n>9)    //run the loop until it is greater than 9
	{
		n=n/10;    //number divided by 10
	}
	sum=sum+n;
	{
		printf("sum of first and last digit is %d",sum);
		}	
	
	
}
