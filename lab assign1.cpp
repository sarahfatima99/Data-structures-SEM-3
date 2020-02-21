#include<iostream>
#include<fstream>
using namespace std;
class student{
	string name[3];
	float gpa[3];
	int semester[3];
	float x;
	float max;
	public:
		void inputdata(student &s)
    	{ student s3;
			fstream f;
			f.open("student.txt",ios::out );
			for (int i=0;i<3;i++){
		
			cout<<"\nenter name, gpa and sem of student\n",i+1;
		    cin>>s.name[i]>>s.gpa[i]>>s.semester[i];
			f<<s.name[i]<<"\n"<<s.gpa[i]<<"\n"<<s.semester[i]<<"\n";
		
		} 	f.close();}
		void gethighest(student &s1){
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
};
int main(){
	student s,s1;
    s.inputdata(s);
    s.gethighest(s1);
}
