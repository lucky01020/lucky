//16.Accept 5 numbers from user and perform sum of array..

#include<stdio.h>

main()

{
	int a[5],i,sum=0;  //data members
	
	printf("Enter element of array:");
	
	for (i=0;i<5;i++)   //using loop here
	{
		scanf("%d",&a[i]);
	}
	
	
	for (i=0;i<5;i++)
	
	{
		sum=sum+a[i];  //using sum variable for addition
	}
	printf("Addition is %d",sum);
	
}
