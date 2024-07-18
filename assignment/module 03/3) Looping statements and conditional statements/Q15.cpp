//.Calculate sum of 10 numbers using of while loop//

#include<stdio.h>

main()

{
	int i=1,sum=0;
	
	while(i<=10)
	
	{
		sum=sum+i;
		printf("%d+",i);  
		i++;
	}
	printf("\nsum is: %d",sum);
	
	
}
