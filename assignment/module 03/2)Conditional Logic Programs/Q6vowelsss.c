//Find the character it is vowel or not....

#include<stdio.h>

main()

{
	char z;
	printf("Enter the alphabet:");
	scanf("%c",&z);
	
	if (z=='a' || z=='e' || z=='i'|| z=='o' || z=='u')
	{
		printf("it is vowel");
	}
	else
	{
		printf("it is consonant");
	}
}
