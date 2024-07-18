//6. Write a program in C to count the total number of alphabets, digits and special
//characters in a string.

#include<stdio.h>

main()
{
	char a[30];
	int i,j=0,k=0,l=0;   //data members
	
	printf("Enter the string:");
	gets(a);
	
	for (i=0;a[i]!='\0';i++) 
	
	{
		if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z') //condition for alphabets
		{
			j++;
		}
		else if(a[i]>='0' && a[i]<='9') //condition for digits
		{
			k++;
		}
		else if (a[i]==' ')
		{
			continue;
		}
		else
		{
			l++;   //for special characters...
		}
		
	}
	printf("Alphabets are %d",j);
	printf("\nDigits are %d",k);
	printf("\nspecial characters are %d",l);
}
