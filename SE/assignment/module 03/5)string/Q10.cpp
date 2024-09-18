//10.Write a program in C to extract a substring from a given string

#include<stdio.h>

main()

{
	char a[10],b[10]; //data members
	int i,l,s,j=0;
	
	printf("Enter a string:");
	gets(a);                   //taking user input
	
	printf("Enter starting position of exact subsstring:");
	scanf("%d",&s);
	
	printf("Enter the length of substring: ");
	scanf("%d",&l);           //taking length of a string
	
	for(i=j;i<s+l-1;i++)  //using loop
	
	{
		b[j]=a[i];  //applying condition
		j++;
	}
	a[j]='\0';
	
	printf("\nSubstring %s",b);
	
	
	
	
}

