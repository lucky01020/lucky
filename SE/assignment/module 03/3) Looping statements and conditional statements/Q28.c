#include<stdio.h>

main()

{
	int n,i,x=1,y=2;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("%d \n%d",x,y);
	
	for (i=3;i<=n;i++)
	
	if(i%2==1)
	{
		x=x*3;
		printf("\n %d",x);
	}
	else
	{
		y=y*3;
		printf("\n %d",y);
	}
	
}
