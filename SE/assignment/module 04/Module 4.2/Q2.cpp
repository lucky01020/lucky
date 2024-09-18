// WAP to create simple calculator using class 
// Define a class to represent a bank account. Include the following members: 
//1. Data Member: 
//-Name of the depositor 
//-Account Number 
//-Type of Account 
//-Balance amount in the account 
//2. Member Functions 
//-To assign values 
//-To deposited an amount 
//-To withdraw an amount after checking balance 
//-To display name and balance

#include<iostream>

using namespace std;

class Bank{
	private:
	   
	   string name;       
	   int accountno;
	   string account_type;
	   float balance;       //taking data types according to details
	   
	   public:
	   
	   fun1()
	   {
	   	
	   		
	   	cout<<"Enter the name:"<<endl;
	   	cin>>name;
	   
	
	   	cout<<"Enter the number:"<<endl;
	   	cin>>accountno;
	   	
	   	cout<<"Enter the type of account:"<<endl;
	   	cin>>account_type;
	   	
	   	//taking user input//
	   	
	   }
	   
	   deposit()
	   {
	   	float a;
	   	
	   	cout<<"Enter the deposit amount:"<<endl;
	   	cin>>a;
	   	
	   	balance=balance+a;  //calculating balance by addition of deposit amt
	   	
	   	cout<<"Your total balance is:"<<balance<<endl;
	   }
	   withdraw()
	   {
	   	float b;
	   	
	   	cout<<"Enter the withdrawl amount:"<<endl;
	   	cin>>b;
	   	
	   	if(b<=balance)
	   	{
	   		balance=balance-b; //calculating balance by subtracting withdraw amt
	   		
	   		cout<<"Your total balance is:"<<balance<<endl;
		   }
		   else
		   {
		   	cout<<"check your balance there is not enough cash"<<endl;
		   }
	   }
	   Display()
	   {
	   	cout<<"Name:"<<name<<endl;
	   	cout<<"Your balance:"<<balance<<endl;
	   }
};

main()
{
	Bank obj;   
	obj.fun1();   //calling functions//
	obj.deposit();
	obj.withdraw();
	obj.Display();
	
}
