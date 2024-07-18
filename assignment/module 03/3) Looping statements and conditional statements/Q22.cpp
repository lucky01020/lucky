#include<stdio.h>

main()

{
	
	int n,c,r,s=0;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	c=n;
	while(n>0)
	
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s)
	{
		printf("This is palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}
