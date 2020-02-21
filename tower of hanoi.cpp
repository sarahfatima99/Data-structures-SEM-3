#include<iostream>
using namespace std;
void toh(int n, char beg, char aux, char end){
	if(n>=1){
		toh(n-1,beg,end,aux);
		cout<<"\nDisk moved from "<<beg<<"to "<<end<<endl;
		toh(n-1,aux,beg,end);
	}
}
int main(){
	cout<<"enter number of disk";
	int n;
	cin>>n;
	toh(n,'A','B','C');
}
