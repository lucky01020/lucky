//12.WAP to accept 5 students name and store it in array

#include<stdio.h>

main()

{
	char a[5][30];  //data members
	
	int i;
	
	printf("Enter the five students name:");
	
	for (i=0;i<5;i++)   //using loop
	{
		printf("%d.",i+1);
		gets(a[i]);
	}
	
	for (i=0;i<5;i++)
	
	{
		printf("\n%s",a[i]);
	}
	
	
}
