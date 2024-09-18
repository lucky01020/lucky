//ascii value of given number...
#include<stdio.h>

 main()
 
 {
 	char ascii;
 	
 	printf("Enter the character:");
 	scanf("%c",&ascii);
 	
 	if(ascii>=33 && ascii<=127)
 	
 	{
 		printf("ascii:%c \nvalue%d",ascii,(int)ascii);
 		
	 }
	 else
	 
	 {
	 	printf("it is invalid");
	 }
 }
