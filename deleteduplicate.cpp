#include<iostream>
using namespace std;
class node{
public:
node* next;
int data;
public:
node(){
next=NULL;
data=0;
}
node(int a){
data=a;
next=NULL;
}
node(int a,node *in){
data=a;
next=in;
}
};
class list{
node *head=NULL,*tail=NULL;


int size;
public:
list(){
head=NULL;
size=0;
}
/* list(const list& original){
size=original.size;
head=NULL;
node *ptr=original.head;
node *newptr,*lastptr
newptr=new node(ptr->data);
if(head==NULL){
head=newptr
}
}*/
void addnodetohead(int n){
if(head==NULL){
head=tail= new node(n);
size++;

}
else {
// new node(n);
head=new node(n,head);

size++;
}
}
void addtotail(int n){
if(tail==NULL){
head=tail= new node(n);

}
else{
tail->next=new node(n);
tail=tail->next;


}

}
void insertafter(int a,int n){
node *temp=new node;
temp=head;
while(temp->data!=a){
temp=temp->next;

}
node *ptr=new node(n);
ptr->next=temp->next;
temp->next=ptr;
}
void insertbefore(int a,int n){
	 node* temp=new node;
	 temp=head;
	 while(temp->next->data!=a){
	 	temp=temp->next;
	 }
	 node *ptr= new node(n);
	 ptr->next=temp->next;
	 temp->next=ptr;
	 
}
/* void deletefromhead(){  
                        if(head==NULL){
return;
}
else{
if(head==tail){
delete head;
head=NULL;
tail=NULL;}
else{
node *temp=head;
head=head->next;
delete temp;
temp=NULL;
}

}
}
void deletefromtail(){
if(tail==NULL){
return;

}
else{
if(tail==head){
delete tail;
tail=NULL;
head=NULL;

}
else{
for(temp=head;temp->next!=tail;temp=temp->next){
delete tail;
tail=temp;
tail->next=NULL;
}
}

}
}*/

~list(){
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
}

}
}
void insertat(int a,int n){
	node *temp=new node;
	temp=head;
	while(temp->data!=a){
		temp=temp->next;
	} 
	temp->data=n;
}
void deletat(int a){
	node *temp=new node; 
	temp=head;
	while(temp->data!=a){
		temp=temp->next;
	}
//	node *ptr= new node;
//	ptr=temp->next;
//	temp->data=ptr->data; 
node *ptr=temp->next;
temp->data=ptr->data;
temp->next=ptr->next;
delete ptr;
ptr=NULL;

}
void deletebefore(){//487711112223
		node *temp=new node;
		node *ptr,*dup;
	temp=head;
	
	while(temp!=NULL && temp->next!=NULL){
	
	
	ptr=temp->next;
	while(ptr!=NULL){
		if(temp->data==ptr->data){
			dup=ptr;
			ptr=ptr->next;
			delete dup;
		}else {
		
		ptr=ptr->next;}
	}
	 
	
	temp=temp->next;
	//	cout<<temp->data<<" ";
		/*temp=temp->next;
		if(temp->data==ptr->data){
			temp->next->data=ptr->next->data;
			temp->next=ptr->next;
			
			
		}
		temp=temp->next;
	}*/
//	node *ptr= new node;
//	ptr=temp->next;
//	temp->data=ptr->data;}
}
delete temp;
temp=NULL;
dup=NULL;
delete ptr;
ptr=NULL;
}

void deletafter(int a){
	node *temp=new node;
	temp=head;
	while(temp->data!=a){
		temp=temp->next;
	}
//	node *ptr= new node;
//	ptr=temp->next;
//	temp->data=ptr->data; 
node *ptr=temp->next;
temp->next->data=ptr->next->data;
temp->next=ptr->next;
delete ptr;
ptr=NULL;

}
};
int main(){
list l;
//l.addnodetohead(8);
//l.addnodetohead(10);
//l.addnodetohead(77);
l.addtotail(4);
l.addtotail(8);
l.addtotail(11);
l.addtotail(7);
l.addtotail(11);
l.addtotail(7);
l.addtotail(22);
l.addtotail(23);
//l.addnodetohead(23);
//l.insertafter(6,9);

//l.insertbefore(4,5);
//l.insertat(8,66);
l.deletebefore();
l.display();
/*cout<<"\ndelet at\n";
l.deletat(10);
l.display();
cout<<"\ndelete before 8\n";

l.deletebefore(6);
l.display();
cout<<"delete after ";
l.deletafter(6);
l.display();*/
return 0;
}

