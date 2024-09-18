#include<stdio.h>

main()

{
	int days,month;
	
	printf("Enter the number of days:");
	scanf("%d",&days);
	
	month=days/30;
	
	printf("Months are:%d",month);
}
