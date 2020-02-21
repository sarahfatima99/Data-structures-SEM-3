#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class norepition{
	fstream f,q;
	int flag;
	char a[80];
	char alpha[30];
	public:
		norepition(){	};
		norepition(char a1[80],char alpha1[]){
		for(int i=0;i<strlen(a1);i++){
			
			a[i]=a1[i];
		}
				
				for(int i=0;i<strlen(alpha1);i++){
				alpha[i]=alpha1[i];
				}}
		void repcheck(){
			for(int i=0;i<strlen(alpha);i++){
	for(int j=0;j<strlen(a);j++){
		if(alpha[i]==a[j]){
			flag++;
			if(flag>1){
				a[j]='-';
			}
		}
	}
	flag=0;
}}
void savefile(){
		char a[80];
	f.open("ques3.txt",ios::out);
	if(!f){
		cout<<"cannot open";
	}
	for(int i=0;i<strlen(a);i++)
	f<<a[i];
	f.close();
}
		
		void editfile(){
		
		{if(!q){
	cout<<"cannot open";
}
q.open("ques3.txt",ios::app);
q<<"\n\nstring with no repition: \n";
for(int i=0;i<strlen(a);i++){
	q<<a[i];
	cout<<a[i];
}
q.close();
			
		}}
};
int main(){
	char a[80];
	char alpha[]={"abcdefghijklmnopqrstuvwxyz"};
cout<<"enter a string";
	cin.getline(a,80);
norepition r(a,alpha);
r.savefile();
r.repcheck();
r.editfile();
/*	fstream f,q;
	char a[80];
	f.open("ques3.txt",ios::out);
	if(!f){
		cout<<"cannot open";
	}
	cout<<"enter a string";
	cin.getline(a,80);
	for(int i=0;i<strlen(a);i++)
	f<<a[i];
	f.close();
	int flag;

char b[80];
char alpha[]={"abcdefghijklmnopqrstuvwxyz"};
for(int i=0;i<strlen(alpha);i++){
	for(int j=0;j<strlen(a);j++){
		if(alpha[i]==a[j]){
			flag++;
			if(flag>1){
				a[j]='-';
			}
		}
	}
	flag=0;
}
if(!q){
	cout<<"cannot open";
}
q.open("ques3.txt",ios::app);
q<<"\n\nstring with no repition: \n";
for(int i=0;i<strlen(a);i++){
	q<<a[i];
	cout<<a[i];
}
q.close();
*/
}
