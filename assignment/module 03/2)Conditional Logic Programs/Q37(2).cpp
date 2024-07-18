#include<stdio.h>

main()

{
	char x;
	
	printf("Enter the character:");
	scanf("%c",&x);
	
	switch(x)
	{
		case 'a':
		{
		printf("\nVowel");
		break;
     	}
     	case 'e':
     	{
     		printf("\nVowel");
     		break;
		 }
		case  'i':
		{
			printf("\nVowel");
			break;
		}
		case  'o':
		{
			printf("\nVowel");
			break;
		}
		case 'u':
		{
			printf("\nVowel");
			break;
		}
		
			default:
		{
			printf("\nConsonant");
		}
	}

}
