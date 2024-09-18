//15.Store 5 numbers in array and sort it in ascending order

#include<stdio.h>

main ()

{
	int a[5],i,j,temp;
	
	
	printf("Enter the element:");
	
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<5;i++)  //using loop
	{
		for (j=4;j>i;j--)
		{
			if (a[i]>a[j])
			{
				temp=a[i];          //swapping for ascending order
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
		printf(": %d\t",a[i]);
	}
}
