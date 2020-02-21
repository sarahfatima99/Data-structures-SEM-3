#include<iostream>
using namespace std;
class node{
public:
node *left;
node *right;
int v;
public:
node(){
right=NULL;
left=NULL;
v=0;
}
node(int va, node*l,node *r){
right=r;
left=l;
v=va;
}
node(int va){
v=va;
left=NULL;
right=NULL;
}
};
class tree{
public:
node *root;

tree(){
root=NULL;
}
node* insert(int a,node *root){
if(root==NULL){
root=new node(a,NULL,NULL);
}
else
      {
      if(root->v<a){
      root->right=insert(a,root->right);
  }
  if(root->v>a){
 
  root->left=insert(a,root->left);
  }
    }
 

return root;
}
void display(node *root){
	if(root!=NULL){
	
	display(root->left);
	cout<<root->v<<" ";
	display(root->right);
}}
void findmin(node *root){
	node *parent;
	while(root!=NULL){
		parent=root;
	
		root=root->left;
	}
		cout<<parent->v;
	return;
}
int height(node *root){
	if (root==NULL){
		return 0;
	}
	int lh=height(root->left);
	int rh=height(root->right);
	return 1+max(lh,rh);
}
int countparent(node *root){
	if(root->left==NULL && root->right==NULL){
		return 0;
	}
	else
	return 1+ countparent(root->left)+countparent(root->right);
	
}};
int main(){
tree t;
int x;
node *root=NULL;
for(int i=0;i<8;i++){
cin>>x;
root=t.insert(x,root);
}
t.display(root);
//cout<<t.searching(2,root);
//t.display(2,root);
//t.display(root);
//cout<<"minimum: "<<endl;
//t.findmin(root);
//cout<<endl<<"height"<<endl;
//cout<<t.height(root);

cout<<t.countparent(root);
}
