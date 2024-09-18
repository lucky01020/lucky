//Accept marks from user and check pass or fail...

#include<stdio.h>

main()

{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);
	
	if (marks>33)
	{
		printf("Hurrayy you are pass");
	}
	else
	printf("Sorry you are fail!!!");
}
