/*? reverse a string
// Concatenation 
// Palindrome
// Copy a string 
// Length of the string 
// Frequency of character in s string 
// Find number of vowels and consonants 
// Find number of blank spaces and digits*/

#include<stdio.h>
#include<string.h>

#define MAX_CHAR 256

main()

{
	char a[10],b[10],c;  
	int choice,i,j=0,z=0;
	
	while(choice!='n')    //using loop for menu driven
	{
		printf("\nMenu\n");
		
		printf("1.Reverse a string\n");
		printf("2.Concatenation\n");
		printf("3.Palindrome\n");
		printf("4.Copy a string\n");
		printf("5.Length of a string\n");
		printf("6.Frequency of string character\n");
		printf("7.Number of vowels and character\n");
		printf("8.Find number of blank spaces and digits\n");
		
		//printing menu of all the programs 
		
		printf("Enter your choice: ");
		scanf("%d",&choice);
	
		getchar();
		if(choice==1)
		{
			printf("Enter your string:");
			gets(a);                        //taking user input
				
			printf("Reverse of string: %s",strrev(a)); //reversing a string using inbuilt method
		}
		else if(choice==2)
		{
			printf("Enter the string:");
			gets(a);
			
			printf("Enter the second string:");
			gets(b);                             //taking user input
			
			strcat(a,b);        //using inbuilt for concatenation
			
			printf("After concatenation: %s",a);
		}
		
		else if(choice==3)
		{
			printf("Enter the string:");
			gets(a);                       //taking user input
			
		    strcpy(b,a);     //copying string 
		    
		    strrev(a);   //reversing string for palindrome
		    
		    for (i=0;a[i]!='\0';i++)
		    {
		    	
		    	if(a[i]==b[i])
		    	  j=1;
		    	
		    	else
		    	{
		    		j=0;
		    		break;
				}
			}
			
			if(j==1)
			
			printf("String is palindrome");
		    
		    else
		    
		    printf("String is not palindromee");
		    
		}
		
		else if(choice==4)
		{
		
		printf("Enter the string 1 :");
			gets(a);
			
		printf("Enter the second string 2 :");	
			gets(b);                           //taking user input
			
		strcpy(b,a);   //using inbuilt method
		
		printf("After copying string: \n1 : %s \n2: %s",b,a);
     	}
     	
     	else if(choice==5)
     	{
     		printf("Enter the string:");
     		gets(a);                     //user input
     		
     		printf("Length of string is:%d",strlen(a)); //length of string using inbuilt
		 }
		 
		 
		 else if (choice==6)
	{
    char str[100];
    int frequency[MAX_CHAR] = {0}; // Array to store frequency of each character

    // Get user input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    // Count the frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        unsigned char index = (unsigned char)str[i];
        frequency[index]++;
    }

    // Print the frequency of each character
    printf("Character frequencies:\n");
    for (i = 0; i < MAX_CHAR; i++) {
        if (frequency[i] > 0) {
            printf("'%c': %d\n", i, frequency[i]);
        }
    }

    
}


		 else if(choice==7)
		 {
		 printf("Enter the string:");
		 gets(a);
		 
		 for(i=0;a[i]!='\0';i++)
		 {
		 	if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
		 	j++;       //counting number of vowels
		 	
		 	else
		 	z++;    //counting number of consonants
		 	
		 }
		 printf("Number of vowels: %d",j);
		 printf("Number of consonants: %d",z);
		 
          }
          
          else if (choice==8)
          {
          printf("Enter the string:");
          gets(a);                     //taking user input
          
          for (i=0;a[i]!='\0';i++)
          {
          	if(a[i]==' ')    //condition for space
          	j++;
          	
          	else if(a[i]>='0' && a[i]<='9')  //condition for digits
          	z++;
          	
          	else 
          		continue;
          	
		  }
		  printf("Blank spaces: %d\n",j);
		  printf("Digits are: %d",z);		
		}
		
	}
	
	
}
