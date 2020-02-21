#include<iostream>
#include<cstring>
using namespace std;
class Atype{
private:
	int size;
	char *content;
public:
		void set( char *c){
		strcpy(content,c);
	}
	Atype(const char* s){
		size=strlen(s);
		content=new char[size+1];
		strcpy(content,s);
       }
    Atype (const Atype &oldobject)    //default copy    	   					constructor
      {
       	size=oldobject.size;
        	content=oldobject.content;      
      }
      
	  void print(){
	  	cout<<content;
	  }
      ~Atype(){
      	delete [] content;
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
