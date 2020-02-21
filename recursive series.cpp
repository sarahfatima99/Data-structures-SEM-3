#include<iostream>
using namespace std;
void series(int x,int n){
	if(x>n){
		return;
	}
	if(x%2!=0)
		cout<<"-1/"<<x<<"+";
	
	else cout<<"1/"<<x;
	series(x+1,n);
	
}
int main(){
	cout<<"enter no of series";
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==1){
			cout<<"-1/"<<i<<"+";
		}
		else cout<<"1/"<<i;
	}
	int x;
	cout<<"\n";
	cout<<"1+";
	series(2,n);
}
