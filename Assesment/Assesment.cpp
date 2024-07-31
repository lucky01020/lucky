/*Define a class to represent lecture details. Include the following members and the 
program should handle at least details of 5 lecturers. 
Data members:
a) Name of the lecturer
b) Name of the subject
c) Name of course
d) Number of lecturers
Data functions: 
a) To assign initial values 
b) To add a lecture details 
c) To display name and lecture details*/

#include<iostream>

using namespace std;

class lecturerinfo{
	public:
		
		string lecturer_name;
		string subject_name;
		string course_name;
		int  no_oflecturers;
		
		//data membersss
		
		lecturerinfo(string lecture="",string subject="",string course="",int lecturers=0)
		
		//use of a constructorr
		{
		  	lecturer_name=lecture;
		  	subject_name=subject;
		  	course_name=course;
		  	no_oflecturers=lecturers;
		}
		
		//assigning initial valuess
		Addlecture(string lecture,string subject,string course,int lecturers)
		{
			lecturer_name=lecture;
		  	subject_name=subject;
		  	course_name=course;
		  	no_oflecturers=lecturers;	
		}
		
		//creating the function of add lecturee
		displayname()
		{
			cout<<"\nLecturer name  :"<<lecturer_name<<endl;
			cout<<"\nSubject name   :"<<subject_name<<endl;
			cout<<"\ncourse name    :"<<course_name<<endl;
			cout<<"\nlecturers name :"<<no_oflecturers<<endl;
		}
		
		
		///displaying the name of the lecturer,subject,course,lecturer
};

main()
{
	lecturerinfo obj [5];
	
	
	obj[0].Addlecture("Himanshu sir","science","BTech",10);
	obj[1].Addlecture("Prashant sir","Bio","BSC",12);
	obj[2].Addlecture("Luckyy sir","Accounting","Bcom",11);
	obj[3].Addlecture("modi sir","Political science","BA",18);
	obj[4].Addlecture("Vishal sir","Mathematics","Msc",15);
	
///////taking array in object to displaying the names
	for(int i=0;i<5;i++)    ///using loop
	{
	obj[i].displayname();
			
	}
	
	
}
