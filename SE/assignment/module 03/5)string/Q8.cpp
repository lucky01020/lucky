//8. Write a program in C to count the total number of vowels or consonants in a string//

#include<stdio.h>

main()
{
  char a[50];
  int i,c=0,v=0;
  
  printf("Enter the alphabet:");
  gets(a);
  
  for (i=0;a[i]!='\0';i++)
  
  {
  	if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'||a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
  	 {
  	 	c++;	
	   }
	   
  
  else
  {
  	v++;
  }
  	
  
}
  
  printf("\nVowels are %d",c);
  printf("\nConsonants are %d",v);
}
