//9. WAP to show difference between Structure and Union.


#include<stdio.h>

struct mystructure{
	   int a;
	   int b;
}s1;



main()
    {
    	printf("Enter the number:");
    	scanf("%d",&s1.a);
    	
    	printf("Enter the second number:");
    	scanf("%d",&s1.b);
    	
    	printf("%d",s1.a);
    	printf("\n%d",s1.b);
	}
	
/*#include<stdio.h>

union myunion{
	   int x;
	   int y;	   
}m1,m2;

main()
	{
		printf("\nEnter the number:");
		scanf("%d",&m1.x);
		
		printf("\nEnter the second number:");
		scanf("%d",&m2.y);
		
		printf("%d",m1.x);
		scanf("%d".m2.y);
	}
	
	
