//11.Write a program in c to read a sentence and replace lowercase to uppercase vice versa

#include<stdio.h>

main()

{
	char a[30];
	int i;
	
	printf("Enter the string:");    //enter the string
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if (a[i]>='A' && a[i]<='Z')   //convert uppercase to lowercase 
		a[i]=a[i]+32;
		
		else if(a[i]>='a' && a[i]<='z')  //convert lowercase to uppercase
		a[i]=a[i]-32;
		
		else
		a[i]=a[i];
	}
	
	printf("\n uppercase into lowercase and lowercase into uppercase %s",a);
	
}
