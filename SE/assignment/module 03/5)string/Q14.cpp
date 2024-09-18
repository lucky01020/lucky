//14.Write a program in C to combine two strings manually..

#include<stdio.h>

main()

{
	char a[30],b[30];
	int i,j;
	
	printf("Enter A string:");
	gets(a);
	
	printf("Enter B string:");
	gets(b);                    //taking two strings input
	
	for (i=0;a[i]!='\0';i++);  //loop for first input
	
	
	for (j=0;b[j]!='\0';j++) //loop for second input
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	{
		printf("after combining two strings  %s  ",a);
	}
	
	
}
