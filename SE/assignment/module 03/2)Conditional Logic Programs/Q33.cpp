//input the week number and print week day....

#include<stdio.h>

main()

{
	int number;    //data member
	
	printf("Enter week number");
	scanf("%d",&number);
	
	if (number==1)
	{
		printf("Monday");
	}
	else if (number==2)
	{
		printf("Tuesday");
	}
	else if (number==3)
	{
		printf("Wednesday");
	}
	else if (number==4)
	{
		printf("Thursday");
	}
	else if (number==5)
	{
		printf("Friday");
	}
	else if (number==6)
	{
		printf("Saturday");
	}
	else if (number==7)
	{
		printf("Sunday");
	}
	else
	{
		printf("Invalid");
	}
}
