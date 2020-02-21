#include<iostream>
#include<fstream>
using namespace std;
class empl{
	int id;
	string name;
	int salary;
	public:
		void set(int i, string n, int s){
			id=i;
			salary=s;
			name=n;
		}
		int getid(){
			return id;
		}
		int getsal(){
			return salary;
		}
		string getname(){
			
			return name;
		}
		void getdata(){
		
		}
};
int main()
{
	fstream f;
	f.open("data.dat",ios::out);
	empl e[3];
	int i,s;
	string n;
	cout<<"enter id,name, salary"
	for(int i=0;i<3;i++){
		cin>>i>>n>>s;
		e[i].set(i,n,s);
		f.write((char*)&e[i],sizeof(e[i]));
	}
	f.close();
	
}
