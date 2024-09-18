//24. 1 + 2 + 3 + 4 + 5 + ... + n....//

#include<stdio.h>

 main()
 
 {
 	int i,n,sum=0; 
 	
 	printf("Enter the number:");
 	scanf("%d",&n);
 	
 	for (i=1;i<=n;i++)
 	
 		{
	 	sum=sum+i;
		 
		 
		 if(i==n)
		 {
		 	printf("%d",i);
		 }
		 else
		 {
		 	printf("%d + ",i);
		 }
	}
		 printf("\n%d",sum);
 }


