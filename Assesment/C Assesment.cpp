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



main()

{
	char a[10],b[10],c;  
	int choice,i,j=0,z=0,l;
	
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
				
			for(i=0;a[i]!='\0';i++)   //count length of string
			   l++;
			   
			for(i=0;a[i]!='\0';i++)  //reverse a string
			{
				l--;
				b[l]=a[i];  
			   } 
			   printf("Reversed string : %s",b);  
			   
		}
		else if(choice==2)
		{
			
				printf("\nEnter any String A : ");
				gets(a);
	
				printf("Enter any String B : ");
				gets(b);
	
				for(i=0;a[i]!='\0';i++); //string A
	
				for(j=0;b[j]!='\0';j++) //join string B in A.
				{
					a[i]=b[j];
					i++;
				}
				a[i]='\0';
	
				printf("Concated String is : %s",a);
				
		}
		
		else if(choice==3)
		{
			printf("\nPlease Enter a String : ");
				gets(a);
				
				for(i=0;a[i]!='\0';i++)	//count length of String.
					l++;
	
				for(i=0;a[i]!='\0';i++) //Reverse a String
				{
					l--;
					b[l]=a[i];	     //store reversed string in b variable.
				}
				
				for(i=0;a[i]!='\0';i++)//Check String and reverse String are same or not
				{
					if(a[i]==b[i])
						j=1;
					else
					{
						j=0;
					
					}
				}
			}
				
		else if(choice==4)
		{
		
	printf("Enter any String : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)    //loop for copying string
		b[i]=a[i];
	
	b[i]='\0';
	
	printf("copy String : %s",b);
		
     	}
     	
     	else if(choice==5)
     	{
     		printf("\nEnter a String : ");
				gets(a);	// user input 
	
				for(i=0;a[i]!='\0';i++); //loop for Find Length
	
				printf("Length of String : %d",i);
		 }
		 
		 
		 else if (choice==6)
	{
		printf("\nEnter Your String: ");
    			gets(a);
				
				int count;
				
   				for (i = 65; i <= 122; i++) //find every latter using ascii values 
				{
        			count = 0;
        		for (j = 0; a[j] != '\0'; j++) 
				{
          		  	if ((char)a[j] == i) 
					{
                		count++;		//count letter
           			}
      		 	}
  		      	if(count!=0)
        			printf("%c: %d\n", (char)i, count);
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
