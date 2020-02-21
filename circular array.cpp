#include<iostream>
using namespace std;
/*void circular(int a[],int n,int n2,int n3){

if(n2!=n){
	cout<<a[n2]<<"\n";
	circular(a,n,n2+1,n3);
}

if(n3>=0){
	cout<<a[n3]<<"\n";
	circular(a,n,n2,n3-1);
}
return;

}*/
int main(){
	int n1,n, a[n];
	cout<<"enter value  of index";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
	cout<<"enter places you want to shift";
	cin>>n1;
	int temp[n];
	int j=0;
	for(int i=n1;i<n;i++){
		temp[j]=a[i];
		j++;
	}
//	cout<<j;
	for(int i=0;i<n1;i++){
		temp[j]=a[i];
		j++;
	}
	for(int i=0;i<n;i++){
		cout<<temp[i]<<"\n";
	}
//	circular(a,n,n1,n1);
}
