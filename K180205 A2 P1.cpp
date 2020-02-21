#include <iostream>
#include <cstdlib>
#include<string.h>
#include<fstream>
#include<sstream>
#include<stdio.h>
using namespace std;
class node{

 public:
 int coeff,power;
 node *next;

 node(){
 next=NULL;
 coeff=0;
 power=0;
 }
 node(int c,int p ,node *in) {
 coeff = c;
 power=p;
 next = in;
 }

 node(int c,int p){
 coeff=c;
 power=p;
 next=NULL;
 }
};
class list
{
 private:
 node *head, *tail;
 int count;

 public:
 list(){
 head=NULL;
 tail=NULL;
 count=0;
 }

 



 void add_node_head(int c,int p)
 {
 if(head == NULL) {
 head=tail=new node(c,p);
 count++;
 }
 else{
 head=new node(c,p,head);
 count++;
 }
 }
 
 
 list& operator + (list const &rhs){
 	if(this!=&rhs){
 		list *add = new list;
 		node *ptr, *ptr2;
 		ptr=this->head;
 		ptr2=rhs.head;
 	//	cout<<rhs.count;
 	//	cout<<this->count;
 		
 			while(ptr2!=NULL || ptr!=NULL){
 				if(ptr->power==ptr2->power){
 					if(ptr->coeff+ptr2->coeff==0){
 						ptr2=ptr2->next;
 					ptr=ptr->next;
					 }
					 else{
					 
 					add->addtotail(ptr->coeff+ptr2->coeff,ptr->power);
 					ptr2=ptr2->next;
 					ptr=ptr->next;}
				 }
				 else if(ptr2->power>ptr->power ){
				 //	cout<<ptr2->coeff;
				 	add->addtotail(ptr2->coeff,ptr2->power);
				 ptr2=ptr2->next;
				 
				 }
				 else if(ptr->power>ptr2->power){
				 //	cout<<ptr->coeff;
				 	add->addtotail(ptr->coeff,ptr->power);
				 	ptr=ptr->next;
				 }
			
				
				 
			 }

return *add;
}
else return *this;
}

 list& operator=(const list& rhs){ //assignment operator
 if(this!=&rhs){
 node *ptr;
 /*instead of writing this line and while loop
 we can simply use destructor as this->~list();*/
 while(this->head!=NULL){
 ptr=this->head->next;
 delete this->head;
 this->head=ptr; 
 }

 this->head=NULL;
 this->tail=NULL;
 node *q=rhs.head;
 while(q!=NULL){
 addtotail(q->coeff,q->power);
 q=q->next;
 }
 }
 return *this;


 }
 void addtotail(int c,int p){
 //add to tail
 if(tail!=NULL)
 {
 tail->next = new node(c,p);
 tail = tail->next;
 }
 else{
 head=tail=new node(c,p);
 }
 }
 void display()

 { fstream f;
 f.open("ottput.txt",ios::out);

  
 
      //cout<<count;
 node *temp;
 temp=head;
 while(temp!=NULL) {
 	if(temp->coeff>0){
	 
 f<<"+"<<temp->coeff<<"X^"<<temp->power;
 cout<<"+"<<temp->coeff<<"X^"<<temp->power;
 temp=temp->next;}
 else {
 f<<temp->coeff<<"X^"<<temp->power;
 cout<<temp->coeff<<"X^"<<temp->power;
 temp=temp->next;
 }
 }
 f<<"=0";
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
void derivative(){
	int c,p;
	fstream f;
	f.open("otutput1.1.txt",ios::out);
	node *ptr=head;
	while (ptr!=NULL){
		if(ptr->power==0){
			ptr=ptr->next;
		}
		else {
			c=ptr->coeff*ptr->power;
			p=ptr->power-1;
			if(c<0){
				if(ptr->next!=NULL){
				
				f<<c<<"X^"<<p;
				}
				else f<<"+"<<c<<"X^"<<p;
				ptr=ptr->next;
			}
			else {
			if(ptr->next!=NULL){
				
		    f<<"+"<<c<<"X^"<<p;
				}
				else f<<"+"<<c<<"X^"<<p;
				
				ptr=ptr->next;
			}
		}
	}
f<<"=0";

f.close();}




};
int main()
{ fstream f;
list a,b;

a.addtotail(-2,6);
a.addtotail(3,3);
a.addtotail(4,0);
b.addtotail(5,6);
b.addtotail(1,2);
b.addtotail(1,1);
b.addtotail(-4,0);
//b.addtotail(4,2);
//b.addtotail(-2,1);
//int co,p;
//char c;

//a.display();
//cout<<endl;
//b.display();


//f.open("input2.txt", ios::in);
 list c;

 //cout<<c;
 
// cout<<endl;

 c=b+a;
cout<<"\n";

 c.display();
 cout<<"\n";
 c.derivative();
 //cout<<endl;
 //a.derivative();
 //cout<<endl;
 //b.derivative();
 
// cout<<"hi";
//f.close();
 return 0;
}
