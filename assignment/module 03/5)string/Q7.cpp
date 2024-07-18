//7. Write a program in C to copy one string to another string.


#include<stdio.h>
#include<string.h>
main()

{
	char i[30],j[30] ;
	 
	
	printf("Enter the first string:");
	gets(i);
	
	printf("\nEnter the second string:");
	gets(j);                               //taking user input
	
 strcpy(j,i);  //copying string with the use of inbuilt methods
 
 printf("\nAfter Copy string");	
	{
	
	printf("\n%s",i);
	printf("\n%s",j);
}
}
