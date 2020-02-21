#include<iostream>
using namespace std;
class stud{
	private:
		int rollno;
		int batch;
	public:
		stud(int r, int b){
			rollno=r;
			batch=b;
		}
		friend bool operator == (stud,stud);
};
bool operator == (stud s1, stud s2){
	if(s1.batch==s2.batch)
	return (true);
	else 
	return (false);
} 
int main(){
	stud s1(1001,2016 );
	stud s2(1002,2016);
}
