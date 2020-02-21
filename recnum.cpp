#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int recnum(int a,int l)
{ if(a==0)
return 0;
   
   else 
   return (a%10)*pow(10,l)+recnum(a/10,l--);
		
	
}
int main()
{ int l,n=0;
	cout<<"enter a num";
	cin>>n;
	l=strlen(n);
	cout<<"reverse number is "<<recnum(n,l);
}
