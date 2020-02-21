#include<iostream>
#include<fstream>
#include "student.h"
using namespace std;
void student::inputdata(student &s){
		
			fstream f;
			f.open("student.txt",ios::out );
			for (int i=0;i<3;i++){
		
			cout<<"\nenter name, gpa and sem of student\n",i+1;
		    cin>>s.name[i]>>s.gpa[i]>>s.semester[i];
			f<<s.name[i]<<"\n"<<s.gpa[i]<<"\n"<<s.semester[i]<<"\n";
		
		} 	f.close();
}
void student:: gethighest(student &s1){
			fstream f;
			f.open("student.txt",ios::in);
	for(int i=0;i<3;i++){
		f>>s1.name[i]>>s1.gpa[i]>>s1.semester[i];
		 if(gpa[i]>max)
		 max=gpa[i]	   ;  
		}
		cout<<max;
		f.close();
		}
