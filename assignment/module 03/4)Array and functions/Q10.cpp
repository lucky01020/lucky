//10.WAP to perform Palindrome number using for loop and function

#include<stdio.h>

 palindrome(int x)
 {
 	int i,r,n=0;
 	
 	for (i=x;i!=0;i/=10)  //find reverse number
 	{
 		r= i%10;
 		n= n*10+r;
	 }
	 
	 if (n==x)    //check number is palindrome or not
	  printf("%d is palindrome number",x);
	  
	  else 
	  printf("%d is not palindrome number",x);
 }
 



main()
{
  int n;
  
  printf("Enter the number:");
  scanf("%d",&n);
  
  palindrome(n); //call palimdrome function	
}
