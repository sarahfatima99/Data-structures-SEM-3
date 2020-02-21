#include<iostream>
#include<math.h>
using namespace std;

int palindrom(int a, int c,int x){

	if(c==0){
	return x+a;
}else 
	 x+= a%10* pow(10,c);
	 return palindrom(a/10,c-1,x);
}

int main(){
	int a,x=0;
//	cout<<"enter a number";
//	cin>>a;
//	cout<<palindrom(a,3,x);
cout<<numberofdigits(1234534);
}
