//9. Write a program in C to find the maximum number of characters in a string

#include <stdio.h>

#include<string.h>

main()

{
	char s[100];
	printf("Enter the string:");
	gets(s);
	int i,count=0;
	for(i=0;s[i]!='\0';i++){    //using loop until the null
		count++;
	}
	printf("size of string is:%d",count);
	
	
	
	
}
