//find area of triangle
#include<stdio.h>

main()

{
	int area,b,h; // data members
	printf("Enter height:-");
	scanf("%d", &h);
	
	printf("Enter base:-");
	scanf("%d", &b);
	
   area = (h *  b ) / 2 ; //applying formula of area of triangle
   
   printf("%d Answer Area of triangle " , area);
	
}
