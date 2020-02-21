 #include <iostream>
#include <cstdlib>
#include<string.h>
#include<fstream>
#include<math.h>
#include<sstream>
using namespace std;
	class node {
	public:
		int data;
		node(int a){
			data=a;
			next=NULL;
		    prev=NULL;
		}
		node(int a, node *in,node *ip){
			data=a;
			next=in;
			prev=ip;
		}
		node *next, *prev;
		node(){
			data=0;
			next=NULL;
			prev=NULL;
		}};
class list
{
 private:
 node *head, *tail;

 public:
 list(){
 head=NULL;
 tail=NULL;
 }

 



	void addtohead(int n){
			if(head==NULL){
				head=tail=new node(n);
			}
			else{
				head=new node(n,head,NULL);
				head->next->prev=head;
			}
		}



	void addtotail(int n){
			
			if(head==NULL){
				head=tail=new node(n);
			}
			else {
				tail= new node(n,NULL,tail);
				tail->prev->next=tail;
			}
		}


 void display()
 {
 node *temp=new node;
 temp=head;
 while(temp!=NULL) {
 cout<<temp->data<<endl;
 temp=temp->next;
 }
 }
 
void findpalindrom(){
node *ptr=new node;
ptr=head;
	int i;
	string s2;
	string s;
while(ptr!=NULL){
ostringstream strg;
//	cout<<ptr->data<<endl;
	strg<<ptr->data;
s=strg.str();
	
	s2+=s;
	ptr=ptr->next; 
	//cout<<s;
//	cout<<s<<endl;
//cout<<s2;
}
print(s2);



}
void print(string s){
	int n=s.size();
	bool table[n][n];
	memset(table,0,sizeof(table));
	int max=1;
	for(int i=0;i<n;++i){
		table[i][i]=true;
	}
	int S=0;
	for(int i=0;i<n-1;++i){
		if(s[i]==s[i+1]){
			table[i][i+1]=true;
			S=i;
			max=2;
		}
	}
	for(int k=3;k<=n;++k){
		for(int i=0;i<n-k+1;++i){
			int j=i+k-1;
			if(table[i+1][j-1]&&s[i]==s[j]){
				table[i][j]=true;
				if(k>max){
					S=i;
					max=k;
				}
			}
		}
	}
	fstream f;
	f.open("outpu2.txt",ios::out);
	int e=S+max-1;
	for(int i=S;i<=e;++i){
		f<<s[i];
	}
f.close();	
}  
  




 ~list(){ //destructor
 node *ptr;
 while(head!=NULL){
 ptr=head->next;
 delete head;
 head=ptr;
 }
 }

	
	 	


};
int main()
{list a;
fstream f;
int c,b;
f.open("input1.txt");
f>>c;
for(int i=0;i<c;i++){
	
	f>>b;
	a.addtotail(b);
	
}

// a.display();
 f.close();
a.findpalindrom();
 return 0;
}
