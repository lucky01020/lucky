//Calculate profit and loss on transaction

#include<stdio.h>

main()

{
	int costprice,sellingprice;
	
	printf("Enter Cost price ");
	scanf("%d",&costprice);
	
	printf("Enter Selling price ");
	scanf("%d",&sellingprice);
	
	
	if (costprice<sellingprice)
	
	{
		printf("\n transaction is in profit");
	}
	else if (costprice>sellingprice)
	{
		printf("\n transaction is in loss");
	}
	else
	{
		printf("\nneither is profit nor is loss");
	}
}
