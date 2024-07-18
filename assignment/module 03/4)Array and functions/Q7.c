//WAP Find out length of string without using inbuilt function

#include<stdio.h>
#include<string.h>

main()

{
	char s[100];
	printf("Enter the string:");
	gets(s);                      //user input
	int i,count=0;
	for(i=0;s[i]!='\0';i++);{       //loop for finding length
		count++;
	}
	printf("size of string is:%d",count);
	
	
	
	
}
