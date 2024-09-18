#include<stdio.h>

 main()
 
 {
 	int a,b;
 	
 	printf("Enter the number:");
 	scanf("%d",&a);              	//5
 	
 	printf("Enter the number:");		//10
    scanf("%d",&b);             
    
    a=a*b;       //50
    b=a/b;       //5
    a=a/b;		//10
    
   printf("After swapping a is:%d",a);
   printf("After swapping b is:%d",b); 
	  
 
  }
