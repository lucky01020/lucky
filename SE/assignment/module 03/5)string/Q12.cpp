//12.Write a program in C to find the number of times a given word 'is' appears in
//the given string.

#include<stdio.h>

main()
{
	char a[30];
	int i, count=0;
	
	printf("Enter the string:");  //taking input
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	
	{
		if (a[i]==' ' &&a[i+1]=='i' &&a[i+2]=='s' &&(a[i+3]==' ' ||a[i+3]=='\0'||a[i]=='.'))
		count++;
	}                                  //putting conditions
	printf("%d times 'is' appears in string ",count);
}

