//C program for followin pattern :
/*1
  10
  101
  1010
  10101 */


#include<stdio.h>

main()

{
	int i,j;
	
	for (i=1;i<=5;i++)   //raw
	
	{
		for (j=1;j<=i;j++)  //column
		{
			if (j%2==1)   //if column modulus is 2 is 2==1 then it print 1 in column
			{
				printf("1");
			}
			else 
			{
				printf("0");  
			}
		}
		printf("\n");
	}
}
