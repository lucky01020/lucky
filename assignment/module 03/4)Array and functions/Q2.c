//2. WAP of Addition, Subtraction, Multiplication and Division using Switch
//case.(Must Be Menu Driven)

#include<stdio.h>

main()

{
	int n,choice,a,b;  //data members
	
	while (choice!=5)
	{
	
	printf("Enter the arithmetic options:");
	
	printf("\n 1. ADDITION \n");
	printf("\n 2. substraction \n");
	printf("\n 3. Multiplication \n");
	printf("\n 4. Division \n");
	printf("\n 5. exit \n");
	
	printf("Enter the choice:");
	scanf("%d",&choice);
	
	if (choice>=1 && choice<5)
	
	{
		printf("\nEnter two numbers:\n Number 1:"); //taking two numbers from user
		scanf("%d",&a); 
		
		printf("\nNumber 2:");
		scanf("%d",&b);
	}

	
	switch(choice)
	{
		case 1:
			printf("\nAddition of two number %d+%d=%d\n",a,b,a+b);
			break;
		case 2:
		    printf("\nSubtraction of two number %d-%d=%d\n",a,b,a-b);
			break;
		case 3:
			printf("\nMultiplication of two number %d*%d=%d\n",a,b,a*b);
			break;
		case 4:
			printf("\nDivision of two number %d/%d=%d\n",a,b,a/b);
			break;
		case 5:
			printf("\nExit\n");
			break;
		default:
			printf("\n Invalid choice\n");	
		}
	}
}
