#include<iostream>
#include<fstream>
using namespace std;
int array2[20];
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

class tree
{

	public:
		node* root,*ptr1,*ptr2 , *MAXROOT;
		int x1=0,x=0,x2=0 ,maxx=0 ;
		int array[20];
		
		
		
		node* insert(int x,node* root)
		{
		if(root==NULL){
			root=new node(x);
		
		}
		else if(x<root->data){
			root->left=insert(x,root->left);
		}
		else {
			root->right=insert(x,root->right);
		}
		return root;
		}
	int  height(node *root){
		if(root==NULL){
			return 0;
		}

int lh=height(root->left);
 int rh=height(root->right);
 return 1+max(lh,rh);	


}
int findlongest(node *root1){
	int iterator=0;
	node *ptr = root1;
	x1=0 ;
	x2= 0; 
	node *parent;
	while(root1!=NULL){
		parent=root1;
		x1++;
		array[iterator]=root1->data;
		iterator++;
		root1=root1->left;
		
		
	}
	iterator=0;
	if(x1>maxx && ptr!=NULL){
		for(int i=0; i < x1; i++){
			array2[i]=array[i];
		}
	    maxx=x1;
		MAXROOT=ptr;
		
	}
	

			
			root1 = ptr;
			node *parent2;		
	while(ptr!=NULL){
      		parent2=ptr;
      	    x2++;
      	array[iterator]=root1->data;
		iterator++;
   	 	   ptr=ptr->right;
   	
          
	}
		if(maxx<x2 && root!=NULL){
			for(int i =0; i < x1; i++){
			array2[i]=array[i];
		}
				maxx=x2;
				MAXROOT = root;
				
		}
	 	
//	cout<<" y\n";
//	
//	if(steps1>steps2)
//	    return steps1;
//  	
//    else return steps2;
}
	//cout<<ptr1->data;

void inorder(node *root){
		node* ptr=root;
		
		if(ptr!=NULL ){
//	cout<<root->data <<" ";
	 x= findlongest(root);	
   
   inorder(root->left);

   inorder(root->right);

}	
}
	




	};
	int main()
{ fstream f;
f.open("input1.txt",ios::in);

	int x,n,z;

//   cout<<n;
	tree obj;
	node *root=NULL;
while(!f.eof())
	{
		f>>z;
		root=obj.insert(z,root);

	}
	
//	obj.display(root);
	f.close();
	
obj.inorder(root);
obj.display();	
f.open("outputResult.txt",ios::out);
if(!f){
	cout<<"cannot open file";
}
f<<obj.maxx<<endl;
for(int i=0;i<obj.maxx;i++){
	f<<array2[i]<<",";
}
f.close();
}



