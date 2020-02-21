#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,3,4,8,9,10};
	int i=0;
	int c=7;
	do{
	
if(a[i]+a[c]>10){
		c--;
	}
	else if(a[i]+a[c]==10){
		i++;
		c--;
		cout<<a[i]<<"+"<<a[c]<<"= 10"<<endl;
		
	}
	else if(a[i]+a[c]<10){
		i++;
	}
}while(i!=c);
	
}
