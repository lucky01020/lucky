//convert years into days and months...

#include<stdio.h>

main()

{
	int years,months,days; //data members
	
	printf("Enter the number of years:");
	scanf("%d",&years);
	
	days=years*365; //formula for days
	months=years*12; //formula for months
	
	printf("days are:%d",days);
	printf("\nmonths are:%d",months);
}
