//13.Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>

main()
{
	char a[30];
	int i,j;
	
	printf("Enter the string:");
	gets(a);
	
	for (i=0;a[i]!='\0';i++)
	{
while(!(a[i]>='A' && a[i]<='Z')  &&! (a[i]>='a' && a[i]<='z') &&! (a[i]=='\0')&&! (a[i]=='.'))

{
	for(j=i;a[j]!='\0';j++)
	{
		a[j]=a[j+1];
		
	} 
	 a[j]='\0';
}

   }
	printf("Remove all characters except alphabets string %s",a);
	
}
