#include<iostream>
using namespace std;
#include<string.h>
class Atype{
private:
	int size;
	char * content;
public:
	void set(char *c)
	
		{

		strcpy(content,c);
       }
	
	Atype(char* s){
		size=strlen(s);
		content=new char[size+1];
		strcpy(content,s);
       }
      Atype (const Atype &oldobject)       //our own copy constructor – deep copy
      {
       	 size=oldobject.size;
        	content=new char [size+1];
        	strcpy(content,oldobject.content);
      }
  void print(){
	  	cout<<content;
	  }
      ~Atype(){
      	delete content;
	  }
}; 
int main(){
	Atype a("hello");
	Atype a1=a;
	a.print();
	cout<<"\n";
	a1.print();
    cout<<"\n";
	a.set("hi");
    a.print();
    cout<<"\n";
    a1.print();
	
}

