//4. WAP to find factorial using recursion

#include<stdio.h>

fact(int n)
{
	int i,fact=1;
{
		

	
	for (i=1;i<=n;i++) //using loop
{
		
	fact*=i;
}
return fact; //with return
}
	
}

main()

{
	int n;
	{
	
	printf("Enter the number:");
	scanf("%d",&n);
}

	
 printf("factorial is %d",fact(n ));	
}

