//Area of rectangular prism
#include<stdio.h>

main()

{
	int a=2,w,l,h;
	
	printf("Enter the width:");
	scanf("%d",&w);
	
	printf("Enter the length:");
	scanf("%d",&l);
	
	printf("Enter the height:");
	scanf("%d",&h);
	
	a=(w*l+h*l+h*w);
	
	printf("area of rectangular prism:%d",a);
}
