//kilometres into metres...

#include<stdio.h>

main()

{
	int kilometres,metres;
	
	printf("Enter the kilometres:");
	scanf("%d",&kilometres);
	
	metres=kilometres*1000;
	
	printf("Metres are:%d",metres);
}
