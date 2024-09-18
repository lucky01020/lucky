//find the character value from ascii

#include<stdio.h>

 main() 
 
 {
 	int ascii;
 	
 	printf("Enter the number:");
 	scanf("%d",&ascii);
 	
 	if(ascii>=33 && ascii<=127)
 	
 	{
 		printf("ascii:%d \nvalue%c",ascii ,(char)ascii);
	 }
 	else
 	{
 		printf("the number is not applicable");
 		
	 }
 	
 }
