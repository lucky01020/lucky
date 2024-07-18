//3. WAP to find reverse of string using recursion

#include<stdio.h>


void reverse(char *str)  //function definition

{
	if(*str)
	{
		reverse(str+1); //recursion
		printf("%c",*str);
	}
}

main()

{
	char a[10];
	
	
	printf("Enter a string:");
	gets(a);  //accepting string from user
	
	printf("Reverse string:");
	reverse (a);  //call reverse function
}



