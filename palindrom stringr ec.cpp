#include<iostream> //palindrom
#include<string.h>
using namespace std;
void revarray( char a[],int start,int end){
if(start>=end){
	return;
}
int temp=a[start];
a[start]=a[end];
a[end]=a[start];
revarray(a,start+1,end-1);
}
int main(){
	int n;
	char b[n];
    char *a;
	cout<<"input a string\n";
	cin>>a;
	int l=strlen(a);
	
revarray(a,0,l);
for(int i=0;i<l;i++){
	cout<<a[i];
}
}
