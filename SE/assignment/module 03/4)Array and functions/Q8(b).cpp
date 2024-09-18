//Write a program of structure employee that provides the following
// a. information -print and display empno, empname, address
//andage
//b. Write a program of structure for five employee that
//provides the following information -print and display
//empno, empname, address andage


#include<stdio.h>

struct Employees{
	
	int empno;
	char empname[30];
	char Address[30];
	int age;
}s[5];

main()
{
	int i;
	
	for (i=0;i<5;i++)
	{
		printf("Enter the emp number:");
		scanf("%d",&s[i].empno);
		
			getchar();
	
		
		printf("\nEnter the emp name:");
		gets(s[i].empname);
		
		
		printf("\nEnter the Address:");
		gets(s[i].Address);
		
		printf("\nEnter the Age:");
		scanf("%d",&s[i].age);
	}
		for (i=0;i<5;i++)
		{
			printf("\nEmployee number %d",s[i].empno);
			printf("\nEmployee name %s",s[i].empname);
			printf("\naddress %s",s[i].Address);
			printf("\nEmployee Age %d",s[i].age);
		}
}
