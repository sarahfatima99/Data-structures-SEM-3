#include<iostream>

#include<queue>
#include<stack>
#include<fstream>
using namespace std;
class node{
	public:
		int data;
		
		node *left;
		node *right;
		node(){
			data=0;
			left=NULL;
			right=NULL;
		}
		node(int a){
			data=a;
			left=NULL;
			right=NULL;
		}
		node(int n,node *a ,node *b){
			data=n;
			left=a;
			right=b;
		}
		
};
class tree{public:
	node *root, *ptr,*ptr2;
	int a[10],n=0;
	tree(node *r,int x){
		root=new node(x);
	}
	tree(){
		root=NULL;
	}
	node* insert(node *root,int x){
	
		queue<node *> q;
		node *ptr= new node(x);
		node *c=root;
		if(!root){
			root=ptr;
		
	
			return root;
		}
			q.push(root);
		while(!q.empty()){
	//	q.pop();
			node *c=q.front();
			q.pop();
			if(c->left){
				q.push(c->left);
			}
			else{
				c->left=ptr;
				break;
			}
			if(c->right){
				q.push(c->right);
			}
			else{
				c->right=ptr;
				break;
			}
	
		}	return root;}

	void display(node* root,node *ptr2)
		{fstream f;
		f.open("output2.txt",ios::out);
			node* ptr=root;
			if(ptr!=NULL && ptr!=ptr2)
			{  
				display(root->left,ptr2);
				display(root->right,ptr2);
				
		
			}
			f.close();
			return;
			
		}
		void traversal(node *root,int s){
			int sum,i=0;
			node *traverse=root;
			queue <node*> stk;
			stk.push(root);
			if(traverse==NULL){
				cout<<"no such sum presnet";
			}
			while(!stk.empty()){
			
				traverse=stk.front();
				stk.pop();
				if(sum<s){
				sum+=traverse->data+traverse->right->data+traverse->left->data; 
			ptr=traverse;
			ptr2=traverse->left;
			
			n++;
				}
				
					if(sum==s){
						if(isBST(traverse)){
					
					display(traverse,ptr2);}
				}
				if(sum>s){
					n=0;
					traversal(traverse->left,s);
				}
				
		
			if(traverse->left!=NULL){
				stk.push(traverse->left);
			}
			if(traverse->right!=NULL){
				stk.push(traverse->right);
			}
				}
			
			  
			
			
		}
	/*	void sum(int s,node *naehora,node *hojayeyar){
			hojayeyar=traversal(naehora->left);
			int w=hojayeyar->data+hojayeyar->left->data+hojayeyar->right->data;
               			while(hojayeyar!=NULL){
				if(w<s){
						hojayeyar=traversal(hojayeyar);
						w+=hojayeyar->data+hojayeyar->left->data+hojayeyar->right->data;
				}
				else if(w==s){
					cout<<w;
				}
		
			}
		}*/
		int maxof(node *root){
			node *ptr=root;
			while(root!=NULL){
				ptr=root;
				root=root->right;
			}
			return ptr->data;
		}
		
		int minof(node *root){
			node *ptr=root;
			while(root!=NULL){
				ptr=root;
				root=root->left;
			}
			return ptr->data;
		}
		bool isBST(node *BTree)
		{
			node *current=BTree;
			if(root==0)return true;
			if(current->data < minof(current->left))
			{
				return false;
			}
			if(current->data > maxof(current->right))
			{
				return false;
			}
			if(!isBST(current->right)||!isBST(current->left))
			{
				return false;
			}	
		}
		
		void display(){
		//	int n=sizeof(a)/sizeof(a[0]);
	fstream f;
	f.open("output2.txt",ios::out);
	
	
		
			for(int i=0;i<n;i++){
				f<<a[i]<<" ";
			}
			
		f.close();}
};
int main(){
	fstream f("input1.txt",ios::in);
	node *p=NULL;

int x,s,v;
	f>>x;
	
	
	f>>s;
tree t;
	for(int i=0;i<x;i++){
		f>>v;
		//cout<<v<<" ";
		p=t.insert(p,v);
	}
	f.close();
//cout<<	p->data;
//	t.display(p);
//	cout<<p->data;

t.traversal(p,s);
t.display();}

//cout<<s;}
