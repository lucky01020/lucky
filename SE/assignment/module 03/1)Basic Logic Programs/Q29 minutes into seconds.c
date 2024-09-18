//convert minutes into seconds and hours...

#include<stdio.h>

main()

{
	int minutes,seconds,hours; //data members
	
	printf("Enter the minutes:");
	scanf("%d",&minutes);
	
	seconds=minutes*60; 
	hours=minutes/60;
	
	printf("seconds are:%d",seconds);
	printf("\nhours are:%d",hours);
}
