#include<stdio.h>

main()

{
	int height;
	
	printf("Enter the height:");
	scanf("%d",&height);
{

		
	if (height>=160 && height<=175)
	{
		printf("the height of person is average");
	}

	else if (height>=176)
	{
		printf("the person is taller");
	}
	else
	{
		printf("the person is short");
	}
}
}
