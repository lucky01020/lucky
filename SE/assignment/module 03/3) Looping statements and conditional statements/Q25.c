//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)//

#include<stdio.h>

main()

{
	int i,n,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	
	for (i=1;i<=n;i++)
	
	{
		sum=sum+i*i;
		
		if (i==n)
		{
			printf("(%d*%d)",i,i);
		}
		else
		{
			printf("(%d*%d)+",i,i);
		}
		printf("=%d",sum);
	}
}
