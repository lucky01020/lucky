//Assume a class cricketer is declared. Declare a derived class batsman from 
//cricketer. Data member of batsman. Total runs, Average runs and best 
//performance. Member functions input data, calculate average runs, Display 
//data. (Single Inheritance)

#include<iostream>

using namespace std;

class Cricketer{             
	protected:
		
		string name;         //taking string for name of the cricketer
			
		Cricketer()
		{
		
		
		cout<<"Enter the name:"<<endl;
		cin>>name;
	}
};

class Batsman:public Cricketer{  //inherited the cricketer class
	public:	
	    int match;
		int average_runs;
		int best_performance;
		int total_runs;
		
		
		fun1()
		{
		
	
		
		cout<<"Enter the match played:"<<endl;
		cin>>match;
		
		cout<<"Enter the runs:"<<endl;
		cin>>total_runs;
		
		cout<<"Enter the performance:"<<endl;
		cin>>best_performance;                     //taking user input
		
			}
	    Average()
	    {
	      average_runs=total_runs/(float)match;  //counting average by didviding total match and runs
		}
		Display()
		
		
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Match:"<<match<<endl;
			cout<<"Total runs:"<<total_runs<<endl;
			cout<<"Best performance:"<<best_performance<<endl;
			cout<<"Average :"<<average_runs<<endl;       //displaying all the data
		}
		
};

main()
{
	Batsman Obj;  //creating object
	Obj.fun1();
	Obj.Average();
	Obj.Display();
}
