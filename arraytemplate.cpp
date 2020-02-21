#include<iostream>
using namespace std; 

class sum{
	public:
		template <class t,class u>
		t sum1(t a[],u b[]){
		t s2;		
        s2=a+b;
	return s2;
	}

}; 
int main(){
	sum s;
	int a[3]={1,2,3};
	float b[3]={1.2,1.2,3.3};
	for(int i=0;i<3;i++ ){
	
cout<<	s.sum1<int>(a[i],b[i]);
}
	
}
