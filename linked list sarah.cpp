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
node *head,*tail=NULL;


int size;
public:
	void my_swap (node *node_1, node *node_2)
{
	int temp = node_1->data;
	node_1->data = node_2 -> data;
	node_2 -> data = temp;
}

void bubble_sort(node *h)
{
	int swapped;
 
	node *lPtr; // left pointer will always point to the start of the list
	node *rPrt = NULL; // right pointer will always point to the end of the list
	do
	{	
		swapped = 0;
		lPtr = head;
		while(lPtr->next != rPrt)
		{
			if (lPtr->data > lPtr->next->data) 
			{
				my_swap(lPtr, lPtr->next); 
                swapped = 1; 
			}
			lPtr = lPtr->next;
		}
		//as the largest element is at the end of the list, assign that to rPtr as there is no need to
		//check already sorted list
		rPrt = lPtr;
 
	}while(swapped);
}
list(){
node *head=NULL;
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
void hello(){
	bubble_sort(head);
	display();
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
void reverselinkedlist(){
node *current=head;
node *prev=NULL;
node *next=NULL;
while(current->next!=NULL){

	next=current->next;
	cout<< " next: "<<next->data<<" ";
	current->next=prev;
	prev=current;
	cout<<" prev "<<prev->data<<" ";
	current =next;
	cout<<" current "<<current->data<<" ";
	
}	
//cout<<"he"<<current->data;
//cout<<current->data;

head=prev;}
/*node *temp=head;
while(temp!=NULL){
	cout<<temp->data<<endl;
	temp=temp->next;
	
}*/
/*void bubblesort(){
	node *ptr=head, *temp=new node, *ptr2;
	
	for(int i=0;i<6;i++){
		ptr2=ptr1->next;
		for(int j=0;j<6-i-1;j++){
		if(ptr->data>ptr2->data){
			temp->data=ptr2->data;
			ptr2->data=prt1->data;
			ptr1->data=temp->data;
		}
			temp=NULL;
		}
		ptr=ptr->next;
	}
	
	
}*/
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
void deletebefore(int a){
		node *temp=new node;
	temp=head;
	while(temp->next->data!=a){
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
l.addnodetohead(8);
l.addnodetohead(10);
l.addnodetohead(77);
l.addtotail(4);

l.addtotail(7);
l.addtotail(11);
//l.display();
//l.reverselinkedlist();
//l.insertafter(6,9);

//l.insertbefore(4,5);
//l.insertat(8,66);
l.hello();
//l.display();
/*cout<<"\ndelet at\n";
l.deletat(10);
l.display();
cout<<"\ndelete before 8\n";

l.deletebefore(6);
l.display();
cout<<"delete after ";
l.deletafter(6);
l.display();*/
}


