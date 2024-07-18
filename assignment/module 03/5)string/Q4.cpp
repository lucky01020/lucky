//4. Write a program in C to count the total number of words in a string.

#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	int i;
	
	printf("Enter the string:");
	gets(a);
	
	printf("%d",strlen(a));  //using inbuilt functions
}
