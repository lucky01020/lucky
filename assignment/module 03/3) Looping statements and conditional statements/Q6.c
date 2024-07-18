//6. WAP to print Fibonacci series up to given numbers

#include<stdio.h>

main()

{
	int n,i,fib1=0,fib2=1,fib;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("Fibonacci series: \n0\n1\n");

		
	for(i=1;i<n-1;i++)	
	{
		fib=fib1+fib2;
		printf("%d\n",fib);
		fib1=fib2;
		fib2=fib;
	}
}
