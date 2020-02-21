#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class person{
	public:
	void display(){
			float std[5]={53.3,66.4,33.4,55.6,77.6};
		int score[3]={88,99,100};
	fstream file("test",ios::out);
	file.write((char*)&std,sizeof(std));
	file.write((char*)&score,sizeof(score));
	file.close();
	for(int i=0;i<5;i++){
		std[i]=0;
	}
	file.open("test",ios::in);
	//float std[5];
	file.read((char*)&std,sizeof(std));
	file.read((char*)&score,sizeof(score));
	for(int i=0;i<5;i++){
		cout<<std[i]<<endl<<"\t"<<score[i];
		file.close();
	}
};
int main(){
    person p;
    p.display();
	}

