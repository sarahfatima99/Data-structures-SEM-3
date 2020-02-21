#include<iostream> //palindrom
#include<string.h>
using namespace std;
void revarray( char a[],int l){
	if(l==0){
		cout<<a[l];
		return;
	} else 
	cout<<a[l];
	 revarray(a,l-1);
}
int main(){
	int n;
	char b[n];
    char *a;
	cout<<"input a string\n";
	cin>>a;
	int l=strlen(a);
	
revarray(a,l-1);
}

