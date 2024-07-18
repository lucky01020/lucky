//3. Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>

main ()

{
	char a[30];
	int i,k;     //data members
	
	printf("Enter the string:");
	gets(a);
	
	for (i=0;a[i]!='\0';i++)
	 k++;
	 
	 for (i=k;i>=0;i--)   //reversing the number with using of loop
	 {
	    if (a[i]==' ')
	    
	    continue;
	    
	    else
	    
	    printf("\n%c",a[i]);
	 }
	
}
