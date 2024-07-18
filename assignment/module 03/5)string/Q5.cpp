//5. Write a program in C to compare two strings without using string library functions.

#include<stdio.h>

main()
{
	char a[10],b[10];  //data members
	
	int i,j;
	
	printf("Enter the A string:");
	gets(a);
	
	printf("Enter the B string:");
	gets(b);
	
	for (i=0;a[i]!='\0';i++) //using loop 
	
	{
		if (a[i]==b[i])    //comparing both strings
		j=1;
		
		else
		j=0;
	}
	if(j==1)
	{
		printf("string A and B are the same string!!");
		
	}
	else
	{
		printf("String A and B are not the same string!!");
	}
}
