//Accept the input month number and print number of days...

#include<stdio.h>

main()

{
	int num;
	
	printf("Enter month number:");
	scanf("%d",&num);
	
	if(num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12)
	
	{
		printf("\nThere is 31 days");
	}
	else if(num==2)
	{
		printf("\nThere is 28 or 29 days");
	 }
	 else if (num==4 || num==6 || num==9)
	 {
	 	printf("\nThere is 30 days");
	  } 
	 else 
	 {
	 	printf("\n Invalid month number");
	 }
}
