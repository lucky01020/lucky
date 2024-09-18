//Check if the given year is leap year or not....

#include<stdio.h>

main()

{
	int year;
	
	printf("Enter year:");
	scanf("%d",&year);
	
	if(year%4==0) //if year is divisible by 4 then it is leap year
	
	{
		printf("This is leap year");
	}
	else
	{
		printf("this is not leap year");
	}
	
}
