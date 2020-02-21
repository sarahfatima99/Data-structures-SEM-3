#include<iostream>
#include<string.h>
using namespace std;
class person{
	private:
		int age;
	protected:
		string name;
		public:
		person(int a,string n):age(a),name(n){
		}
		
		void display()
		{
			cout<<"age: "<<age<<"\nname: "<<name<<"\n";
		}
};
class employee{
	private:
		int empid;
	protected:
		int salary;
		public:
		employee(int id,int sal ):empid(id),salary(sal){
			//empid=id;
			salary=sal;
		}
		public:
		void display(){
		
			cout<<"\nemployee ID: "<<empid<<"\nsalary: "<<salary;
		}
		
};
class manager:public person,public employee{
	private:
		string type;
	
		public:

		manager(int a, string n, int id, int sal, string t):person(a,n),employee(id,sal),type(t)
		{
		}
		void display(){
			person::display();
			employee::display();
			cout<<"\ntype: "<<type;
		}
};
class itmanager:public manager{
	
	private:
		int noofperson;
	public:
	itmanager(int a, string n,int id ,int sal,string t, int p):manager(t),noofperson(p){
	}
		void display(){
		manager::display();
		cout<<"no of person: "<<noofperson
		
		}
};
int main(){
itmanager m(20,"sarah",202,2000,"t",2);
m.display();
//	employee lol(19,20);
//	lol.display();
//	p.display();
//manager m("F");
//m.display();
}
