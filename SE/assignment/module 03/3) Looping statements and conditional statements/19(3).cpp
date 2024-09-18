//C program for followin pattern :
/*    *
     * *
    * * *
   * * * *
  * * * * *  *///

#include<stdio.h>

main()

{
	int i,j,k;
	
	for (i=1;i<=5;i++) //row
	{
		for(j=1;j<=5-i;j++) //space
		{
			printf(" ");   
		}
		
		for (k=1;k<=i;k++)  //column
		{
			printf(" *");
		}
		printf("\n");
	}
}
