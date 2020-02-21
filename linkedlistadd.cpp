#include<iostream>
using namespace std;
struct Node{
	int number;
	Node* next;

};

class Link{

public:
	Link(){
	first=NULL;
	}
	//Link(const Link& l){}
	void input(int n){
		Node *dummy, *temp;

		temp=new Node;
		temp->number=n;
		temp->next=NULL;

		if(first==NULL){
			first=temp;
		}
		else{
			dummy=first;
			while(dummy->next!=NULL)
				dummy=dummy->next;
			dummy->next=temp;
		}
	}
	Link add(Link l){//problem start here
	Node *addition1=first;
		Node *addition2=l.first;
		Link r;
		while(addition1!=NULL){
			r.input(addition1->number+addition2->number);
			addition1=addition1->next;
			addition2=addition2->next;
			addition1->number=l.first->number+first->number;
			addition1=addition1->next;
		}
		 // resulting list
	return r;
		}
		
	
	void print(){
		Node *temp=first;
		while(temp!=NULL){
			if(temp->next!=NULL)
				cout<<temp->number<<",";
			else
				cout<<temp->number;
			temp=temp->next;
		}
		
	}
private:
	Node *first;
};

int main(){
	Link list1, list2;

	list1.input(4);
	list1.input(1);
	list1.input(5);
	list1.input(8);
	list1.input(4);
	cout<<"First list: =";
	list1.print();
	cout<<endl<<endl;


	list2.input(1);
	list2.input(1);
	list2.input(1);
	list2.input(1);
	list2.input(1);
	cout<<"Second list: =";
	list2.print();
	cout<<endl<<endl;

	Link addition=list1.add(list2);
	addition.print();


	return 0;
}
 

