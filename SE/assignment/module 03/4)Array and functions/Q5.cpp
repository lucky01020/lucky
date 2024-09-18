//5. WAP to take two Array input from user and sort them in ascending or
								//descending order as per user’s choice...



#include<stdio.h>

main()

{
	int a[2],b[2],i,j,choice1,choice2,temp;
	
	printf("Enter the first number:\n");
	
	for (i=0;i<2;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the second number:\n ");
	for (i=0;i<2;i++)
	{
		scanf("%d",&b[i]);
	}
	
	printf("\nSelect 1 for ascending order");
	printf("\nSelect 2 for descending order");
	
	printf("\nEnter the array for 1st choice:");
	scanf("%d",&choice1);
	
	printf("\nEnter the array for 2nd choice:");
	scanf("%d",&choice2);
	
	if(choice1==1)
	{
		printf("\nfor ascending");
		{
			for (i=0;i<2;i++)
			{
				for (j=i+1;j<2;j++)
				{
					if (a[i]>a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
					
				}
				printf("\n%d",a[i]);
			}
		}
	}
	else if(choice1==2)
	{
		printf("\nfor descending");
		{
			for (i=0;i<2;i++)
			{
				for (j=i+1;j<2;j++)
				{
					if (a[i]<a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
					
				}
				printf("\n%d",a[i]);
			}
		}
	}
	
	 if(choice2==1)
	{
		printf("\nfor ascending");
		{
			for (i=0;i<2;i++)
			{
				for (j=i+1;j<2;j++)
				{
					if (b[i]>b[j])
					{
						temp=b[i];
						b[i]=b[j];
						b[j]=temp;
					}
					
				}
				printf("\n%d",b[i]);
			}
		}
	}
	
	else if(choice2==2)
	{
		printf("\nfor descending");
		{
			for (i=0;i<2;i++)
			{
				for (j=i+1;j<2;j++)
				{
					if (b[i]<b[j])
					{
						temp=b[i];
						b[i]=b[j];
						b[j]=temp;
					}
					
				}
				printf("\n%d",b[i]);
			}
		}
	}
	else
	printf("Invalid choice");
}
