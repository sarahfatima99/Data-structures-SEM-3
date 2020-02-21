#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<process.h>
#include<fstream>
using namespace std;
class student{
	public:int age;
	string name;

	public:
	float gpa;
		void set(int a,string n, float g){
			age=a;
			name=n;
			gpa=g;
		}
		void get(){
			cout<<"\nname: "<<name<<"\nAge: "<<age<<"\nGPA: "<<gpa<<"\n\n";
		}
};
int main(){
char* c;
float max,max2;
	int a;
	string n;
	float g;
	student std[3];
	student s;
	cout<<"entering data into file";
	fstream f;
	fstream f2;
	f.open("data.dat",ios::out);
	
	cout<<"/nenter students 3 students record;age,name,gpa";
	for(int i=0;i<3;i++){
		cin>>a;
		cin>>n;
		cin>>g;
		std[i].set(a,n,g);
			f.write((char*)&std[i],sizeof(std[i]));
	}
student r[3];
char n1;
f.close();
f.open("data.dat",ios::in);
student v[3],r[3];
cout<<"\n reading data from file";

for(int i=0;i<3;i++){

f.read((char*)&r[i],sizeof(r[i]));	
	if(r[i].gpa>max){
		max=r[i].gpa;
		
	}
	if(max2<max && r[i].gpa>max2){
		max2=r[i].gpa;
	}
	
       	
}
f.close();
cout<<"\n"<<max2;
/*
f.open("data.dat",ios::in);
f2.open("temp.dat",ios::out);
cout<<"enter data you want to replace with";
string h;
cin>>h;
while(!f.eof()){
	f.read("data.dat",ios::in);
		if(r.name==e){
			f2.write((char*)&r.name,sizeof(r.name));
		 
		}
		else 
		f2.write((char*)&r,sizeof(r));
	}
}
    f.close();
    f2.close();
remove("data.dat");
rename("temp.dat","data.dat");
f2.open("data.dat");
for(int i=0;i<3;i++){

while(!f.eof()){
	f.read((char*)&v[i],sizeof(v[i])); 
	v[i].get();
}}
/*cout<<"do you want you enter more data?y/n";
char aa;
cin>>aa;
if(aa=='y'){
	cout<"for how many students you want to enter data?";
    f.open("data.dat",ios::app);
	int c;
	cin>>c;
	for(int i=0;i<c ;i++){
		cin>>a>>n>>g;
		std[i].set(a,n,g);
		
	}
	f.close();}
	else if(aa=='n'){
		cout<<"do you want to delete a data?";
		char b;
		cin>>b;
		
		if(b=='y'){
			char* n;
			cout<<"enter data you want to be deleted";
			cin>>n;
			f.open("data.dat",ios::in);
			fstream f1;
			f1.open("temp.dat",ios::out);
			
			while(f){
				f.read((char*)&s,sizeof(s));
				if(strcmp(n,s.get())!=0){
					f1.write((char*)&s,sizeof(s));
					
				}
			}
			f1.close();
			f.close();
			remove("data.dat");
			rename("temp.dat","data.dat");
			f1.open("data.dat",ios::in);
			while(f){
    for(int i=0;i<3;i++){
	f.read((char*)&s,sizeof(s)); 
}
				
			}
			f1.close();
		}
		
	}*/
}
 
