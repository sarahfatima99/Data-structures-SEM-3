#include<iostream>
#include<string.h>
using namespace std;
int max(int a[], int i,int m){
		if(i<0){
	return m;}
	
	
	if(a[i]>m)
		m=a[i];
	return(a,i-1,m);
	}



int main(){
	int a[]={3,4,7,6,2};
int	l=sizeof(a)/sizeof(a[0]);
	cout<<max(a,5,-100);
}
