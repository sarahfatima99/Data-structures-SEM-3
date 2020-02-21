#include<iostream>
using namespace std;
int min(int a[],int l, int m){
	if(l<0){
		return m;
		
	}
	else{
	
if(a[l]<m){
	m=a[l];
}
return min(a,l-1,m);
}}

int main(){
	int m;
int a[]={-1,2,3,4,1,6};
int l=5;
cout<<min(a,l-1,m);	
}
