//13.WAP to accept 5 numbers from user and check entered number is even or odd
//using of array

#include<stdio.h>

main()

{
	int a[5],i;
	
	for (i=0;i<5;i++)
	
	{
		printf("%d.",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<5;i++)
	
	{
		if (a[i]==0)
		{
			printf("\nNumber is zero %d",a[i]);
		}
		else if(a[i]%2==0)
		{
			printf("\nNumber is even %d",a[i]);
		}
		else
		{
			printf("\nNumber is odd %d",a[i]);
		}
	}
	
}
