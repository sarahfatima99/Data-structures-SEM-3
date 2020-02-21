#include<iostream>
#include<cstdlib>
using namespace std;
class node{
	public:
	node *next;
	int data;
	node(){
		next=NULL;
		data=0;
	
	}
	node(int a){
		data=a;
		next=NULL;
	}
	node(int a, node *in){
		data=a;
		next=in;
	}
};
class list{
	public:
		node *head;	//averagelist a;
		list(){
			head=NULL;
		}
	
	void addhead(int a){
		if(head==NULL){
			head=new node(a);
		}
		else 
		{
			head=new node(a,head);
		}
		
	}

	~list(){
if(head==NULL){
return;
}
else{
	node *ptr;
while(head!=0){


ptr=head;
delete ptr;
head=head->next;}
ptr=NULL;
head=NULL;

}
}

	
};
class averagelist:list{
	public:
		node *ahead;
		averagelist(){
			ahead=NULL;
		}
		void addahead(int a){
			if(ahead==NULL){
				ahead= new node(a);
			}
			else {
				ahead=new node(a,ahead);
			}
		}
			void calaverage(){
	 node *ptr=new node;
	int avg=0;
	if(head==NULL){
		cout<<"khali hy";
	}
		while(head!=NULL){
		 ptr=head;
		 avg=0;
		for (int i=0;i<4;i++){
			avg+=head->data;
			head=head->next;
		}
		head=ptr;
		avg=avg/4;
		addhead(avg);
		head=head->next;
		}
	delete ptr;
	ptr=NULL;
///	a.addahead(avg);
	}
	void displayy(){
		while(head!=NULL){
			cout<<ahead->data<<endl;
			ahead=ahead->next;
		}
		
	}
	~averagelist(){
		node *ptr;
		while(head!=NULL){
			
			ptr=head;
			head=head->next;
			delete ptr;
		}
		ptr=NULL;
		head=NULL;
		return;
	}
		
};
int main(){
	cout<<"enter 10 elements";
	int a;
	list l;
	for (int i=0;i<12;i++){
		cin>>a;
			l.addhead(a);
	}
	averagelist a1;
	//	l.calaverage(a1);
	a1.calaverage();
     a1.displayy();
     l.~list();

}
