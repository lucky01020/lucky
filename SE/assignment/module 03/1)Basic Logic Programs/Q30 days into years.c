//convert year into days...
#include<stdio.h>

main()

{
	int year,days;
	
	printf("Enter the year:");
	scanf("%d",&year);
	
	days=year*365;
	printf("days are:%d",days);
	
	//days into years....
	printf("\nEnter the days:");
	scanf("%d",&days);
	
	year=days/365;
	
	printf("year are:%d",year);
}
