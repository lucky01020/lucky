// Q(16) Write a C program to read temperature in centigrade and display a suitable
//message according to the temperature state below:

#include<stdio.h>

main ()
{
	int temp=0;				// data member....
	
	printf("enter temperature:");
	scanf("%d",&temp);
	
	if(temp<0)						//condition.....if and multiple else if.....
	{
		printf("freezing weather...");
	}
	else if(temp<10)
	{
		printf("very cold weather...");
	}
	else if(temp<20)
	{
		printf("weather is quite cold....");
	}
	else if(temp<30)
	{
		printf("then the temperature is normal...");
	}
	else if(temp<40)
	{
		printf("weather is hot...");
	}
	else if(temp>=40)
	{
		printf("Weather is hot as hell...");
	}
}
