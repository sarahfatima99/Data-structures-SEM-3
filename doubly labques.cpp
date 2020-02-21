#include<iostream>

using namespace std;

class node { 
	public:	
    	int data; 
    	node* prev; 
    	node* next; 
    	
    	
    	node()
    	{
    		data=0;
    		prev=NULL;
    		next=NULL;
		}
		
		node(int a)
		{
			data=a;
			prev=NULL;
			next=NULL;
		}
		
		node(int a, node* x)
		{
			data=a;
			prev=NULL;
			next=x;
			
		}
		
		node(int a, node* x,node* y)
		{
			data=a;
			prev=y;
			next=x;
			
		}
}; 


class doubly{
	public:
		
	node* head;
	
	void AddToHead(int a)
	{
		if(head==NULL)
		{
			head=new node(a);
		}
		else
		{
			head->prev=new node(a,head);
			head=head->prev;
		}
	}
	
	void print() 
	{ 
    	node *temp = head; 
    	cout << endl; 
    	while (temp!=NULL) 
    	{ 
        	cout << temp->data << " "; 
        	temp = temp->next; 
    	} 
	}
	
	
	

        void bubble_Sort() {
            for( node *i = head, *prev = NULL; i->next != NULL; i = i->next) {
                for( node *j = i->next, *prevJ = NULL; j != NULL; j = j->next) {
                    if( i->data > j-> data ) {
                        int tempData = i->data;
                        i->data = j->data;
                        j->data = tempData;
                    }
                }
            }
        }

};

int main()
{
	doubly obj;
	obj.AddToHead(65);
	obj.AddToHead(11);
	obj.AddToHead(101);
	obj.AddToHead(43);
	obj.AddToHead(76);
	obj.print();
	obj.bubble_Sort();
	obj.print();

}
