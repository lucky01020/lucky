//2. Write a program in C to separate individual characters from a string.

#include<stdio.h>

main()

{
	char a[50];       
	
	int i;
	
	printf("Enter the string:");
	gets(a);
	
	
	
	for (i=0;a[i]!='\0';i++)  //using loop until the null
	
	{
		if (a[i]==' ')
		
		    continue;
		
		else
		
		printf("\n%c",a[i]);
	}
}
