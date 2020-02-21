#include<iostream>
#include<string.h>
#include<fstream>
#include<conio.h>
#include<stdio.h>
using namespace std;
void read(){
	ifstream read;
	read.open("check.txt");
	char p;
	while(read.get(p)){
		cout << p;
	}
	cout << endl;

}
int main(){
	fstream file,temp;
	int c;
	do{
	cout << "1-Add New Record\n2-Edit previous record\n3-Delete a record\n4-Show Data\n5-Exit\n\nAnswer :" ;
	cin >> c;
	if(c==1){
	file.open("Check.txt",ios::out | ios::app);
	cout << "\nEnter Record : ";
	string newrec;
    cin.ignore(5,'\n');
	getline(cin,newrec);
	
	file << newrec << '\n' ;
	
	file.close();
	}
	else if(c==2){
	file.open("check.txt",ios::in | ios::out);
	temp.open("temp.txt",ios::out);
	string find,pop,replace;
	read();
	cin.ignore(0,'\n');
	cout << "What to find : " ;
	getline(cin,find);
	cin.ignore(0,'\n');
	cout << "What to Replace : " ;
	getline(cin,replace);
	while(!file.eof()){
		getline(file,pop);
		if(find==pop){
			temp << replace << '\n';
		}
		else if(pop != ""){
			temp << pop << '\n';
		}
	}
	temp.close();
	file.close();
	remove("check.txt");
	rename("temp.txt","check.txt");
	
	}
	else if(c==3){
		file.open("check.txt",ios::in | ios::out);
		temp.open("temp.txt",ios::out);
	string pop,dlt;
	read();
	file.seekp(ios::beg);
	cin.ignore(2,'\n');
	cout << "What to Delete : " ;
	cin >> dlt;
	while(!file.eof()){
		getline(file,pop);
	 	if(pop != ""){
			if(dlt!=pop){
			temp << pop << '\n';
				
			}
		}
		}
	temp.close();
	file.close();
	remove("check.txt");
	rename("temp.txt","check.txt");
		
	}
	else if(c==4){
		read();
		getch();
	}
	system("cls");
	fflush(stdin);
	}while(c < 5);
	return 0;
}
