//Check uppercase,lowercase,digit or special character...
#include<stdio.h>

main()

{
	char z;
	printf("Enter Key:");
	scanf("%c",&z);

    if (z>='A' && z<='Z')
	{
		printf("Uppercase");
		}
	else if (z>='a'&& z<='z')
	{
	printf("Lowercase");	
  }
  else if (z>=1 && z<=9)
   {
   	printf("it is digit");
   }
   else
   {
   	printf("special character");
   }
		
	
}
