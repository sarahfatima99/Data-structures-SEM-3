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
class linkedlist{
	node *head,*tail;
	public:
		list(){
			head=NULL;
			tail=NULL;
		}
	void 	addtohead(int a){
			if(head==NULL){
				head=new node(a);
			}
			else{
				head=new node(a,head);
			}
		}
		void swap(node *n){
	node *ptr=new node;
	ptr->data=n->data;
	n->data=n->next->data;
	
	n->next->data=ptr->data;
	delete ptr;
	ptr=NULL;
		}
		void shuffle (int a){
		node *temp=head;
			while(temp->data!=a && temp!=NULL ){
				temp=temp->next;
			}
			swap(temp);
		} 

void addtotail(int a){
	if(head==NULL){
		head=tail=new node(a);
	}
	else {
	tail->next=new node(a);
	tail=tail->next;
	}
}
void display(){
if(head==NULL){
cout<<"your link list does not exist";
}
else{
node *temp= new node;
temp=head;
while(temp !=NULL){
cout<<temp->data<<" ";
temp=temp->next;
//head=head->next;
}}}
~linkedlist(){
if(head==NULL){
return;
}
else{
if(head==tail){
delete head;
head=NULL;
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
}
/*void reverse(){
 node *current = head;
 node *prev = NULL, *next = NULL;
 while (next != NULL) {
 next = current->next;
 current->next = prev;
 prev = current;
 current = next;
 cout<<current->data;
 }

 head = current;
  cout<<head->data;
 if(head==NULL){
cout<<"your link list does not exist";
}
else{
node *temp= new node;
temp=head;
while(temp !=NULL){
cout<<temp->data<<" ";
temp=temp->next;
//head=head->next;
}}
 } 
/*void reverselinkedlist(){
node *current=head;
node *prev=NULL;
node *next=NULL;
while(current->next!=NULL){

	next=current->next;
	cout<< " next: "<<next->data<<" ";
	prev=current;
	cout<<" prev "<<prev->data<<" ";
	current =next;
	cout<<" current "<<current->data<<" ";
	
}	
cout<<"he"<<current->data;

head=prev;
cout<<head;
delete prev;
prev=NULL;
delete current;
current=NULL;
delete next;
next=NULL;
/*node *temp=head;
while(temp!=NULL){
	cout<<temp->data<<endl;
	temp=temp->next;
	
}*/
 void Reverse() {
            node *prev = NULL,*temp = head,*nextElement = head;
            while(nextElement != NULL) {
                temp = nextElement;
                nextElement = nextElement->next;
                temp->next = prev;
                prev = temp;
            }
            head = temp;
        }
};
int main(){
	linkedlist l;
	l.addtohead(10);
	l.addtohead(9);
	l.addtohead(8);
	l.addtohead(7);
	l.addtohead(6);
//	l.shuffle(8);
//	l.display();
	l.Reverse ();
	l.display();
	//l.display();
}
