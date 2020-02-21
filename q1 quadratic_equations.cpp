#include<iostream>
#include<math.h>
using namespace std;
int main(){
	cout<<"enter coffecients of equation in form\t\t\n Ax^2+Bx+C=0\n";
	float a,b,c,r,r1,i;
	cin>>a>>b>>c;
	int d;
	d=(b*b)-(4*(a*c));
	if(d>0){
		r=(-b+sqrt(d))/(2*a);
		r1=(-b-sqrt(d))/(2*a);
		cout<<"root 1: "<<r<<"\nroot 2: "<<r1;
	}
	else if(d==0){
			r=(-b+sqrt(d))/(2*a);
			cout<<"root 1=root2= "<<r;
			
	}
	 else {
        r = -b/(2*a);
        i =sqrt(-d)/(2*a);
        cout << "root 1 = " << r << "+" << i << "i" << "\n";
        cout << "root 2 = " << r << "-" << i << "i" << endl;
    
}}
