//8)write a program to find out the max from given number...

#include<stdio.h>

main()

{
	int num,digit,maxdigit=0;
	
	printf("Enter the number");
	scanf("%d",&num);
	
	
	
	while(num!=0)  // loop is running until it is zero
	
	{
		digit=num%10;  //capturing last digit
		if (digit>maxdigit) //if digit is greater than maxdigit update the max
		{
			maxdigit=digit;
		}
		num=num/10; //deviding last digit
		}
		printf("the maximum number is %d",maxdigit);	
}
