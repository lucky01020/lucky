//14.Perform 2D matrix array..


#include<stdio.h>

main()

{
	int a[2][2],i,j;
	
	printf("Enter the matrix:");
	
	for (i=0;i<2;i++)  //using loop
	{
		for (j=0;j<2;j++)  
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix are:\n");
	
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
}
