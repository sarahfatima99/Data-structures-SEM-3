#include<iostream>
using namespace std;
class bank{
	const char  *accounttitle;
	int accountnumber;
	int withdrawlamount;
    
	float interestrate;
	float interest;
    int dep;
	int y;
	static int balence;

	public:
	bank(){};
	bank(char *title, int number,  int bal ,int r):accounttitle(title),accountnumber(number),interest(r){
	balence=bal;}
	
	void deposite(){
		cout<<"enter your deposite amount";
		cin>>dep;
		balence=balence+dep;
		cout<<"balence after deposit is"<<balence;
	}
	void interestcal(int inte){
		interestrate=inte;
		cout<<"enter number of years";
		cin>>y;
		interest=y*interestrate*balence/100;
	   cout<<"your interes is"<<interest;
	} 
	void withdrawl(){
		cout<<"enter withdrawl amount";
		cin>>withdrawlamount;
		if (withdrawlamount>balence){
			cout<<"limit exceed";
		}
		else
		balence=balence-withdrawlamount;
		cout<<"your remaining balence is "<<balence;
	}
	void display(){
		cout<<"\n\nname :"<<accounttitle<<"\n balence:"<<balence;
	}
	
};
int bank::balence;
int main(){
    int a;
	bank b("sarah",0205,2,5);
	cout<<"select the following options: \nn 1: withdraw and an amount \n 2: deposit an amout\n, 3:calculate interest";
	cin>>a;
	if (a==1){
		b.withdrawl();
	}
	if(a==2){
		b.deposite();
	}
	if(a==3){
		b.interestcal(3);
	}
	b.display();
}
