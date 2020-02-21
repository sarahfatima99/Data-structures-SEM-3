#include<iostream>
using namespace std;
class integer{
	private:
		int a;
		public:
			integer(int x):a(x){
			}
			integer(){}
		integer operator++(){
			integer temp;
			temp.a=++a;
		return temp;
		}
		
		integer operator++(int){
			integer temp;
			temp.a=this->a++;
		return temp;
		}
		void show(){
			cout<<a;
		}
};
int main(){
	integer i,i2,i1(3 );
	i=++i1; //preincrement does not need argument in operator function but post oncreement does
    i2=i1++;
	i1.show();
	i2.show();
}
