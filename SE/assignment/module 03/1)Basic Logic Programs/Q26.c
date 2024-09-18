//convert fahrenheit to celsius....

#include<stdio.h>

main()

{
	int c,f;  //data members
	printf("Enter fahrenheit:");
	scanf("%d",&f);
	
	c=(f-32)/1.8;  //formula of celsius
	printf("celsius is:%d",c);
}
