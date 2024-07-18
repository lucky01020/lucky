/// program to print below output using for loop//
//01 02 03 04 05 06 07 08 09 10//
// 11 12 13 14 15 16 17 18 19 20//


#include<stdio.h>

main()

{
	int i,j;  //data members//
	
	for (i=1;i<=5;i++) //rows
	{
		for (j=i*10-9;j<=i*10;j++) //column
		{
			printf("%02d ",j); //adding zero
		}
		printf("\n");
	}
}
