#include<stdio.h>

main()

{
	int num,digit,original,result=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
	original=num;
	
	while (original !=0)
	{
		digit=original%10;
		result+=digit*digit*digit;
		original/=10;
	}
	if (result==num)
	{
		printf("\nthis is armstrong number %d",num);
	}
	else
	{
		printf("not an armstrong number ");
	}
	
}
