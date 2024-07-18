//1. Write a program to find out the max number from given array using function

#include<stdio.h>

max(int (z)[3])  
{
	int max=0,i;
	
	for (i=0;i<3;i++)
	
	if(z[i]>max)
	
	{
		max=z[i];
	}
	return max;  //return value
}


main()
{
	int z[3],a;
	
	for (a=0;a<3;a++)
	{
		printf("Enter number:");
		scanf("%d",&z[a]);  //user input
	}
	printf("maximum number is %d",max(z));  //calling function
}

