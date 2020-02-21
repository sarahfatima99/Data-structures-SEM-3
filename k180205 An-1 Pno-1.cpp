#include <iostream>
#include<string.h>
#include<fstream>
using namespace std;
class puzzel{
	int row,col;
	char **array;
public:
	puzzel(){
		row=0;
		col=0;
		array=NULL;
	}
	puzzel(int i,int j){
		row=i;
    	col=j;
	array=new char*[row];
	for(int i=0;i<col;i++){
		array[i]=new char[col];
	}
		}
		~puzzel(){
			if(array!=0){
				for(int i=row-1;i>=0;i--){
					delete [] array[i];
				}
				delete [] array;
			}
			array=NULL;
		}
	void input(){
	fstream f;
		f.open("input1.txt",ios::out);
		f<<row<<col<<endl;
		for(int i=0;i<row;i++){
			cout<<"enter word no "<<i+1;
			for(int j=0;j<col;j++){
				
				cin>>array[i][j];
			f<<array[i][j];
			}
			f<<endl;
		}
		f.close();
	}
	void output(){
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cout<<array[i][j];
			}
			cout<<"\n";
		}
	}
	void right( string a,fstream &f){ //this function will check the word from right direction
	
int	l=a.size();

int size=0;


			for(int j=0;j<row;j++){
				size=0;
				for(int k=0;k<col;k++){
					
					if(a[size]==array[j][k] ) //both conditons required to be true ie if first and second index of the input string matches the one on the 2d array puzzel 
					  {
					  					   size++;
					  }
		
			if(size==l){
			
				cout<<j<<k-(size-1)<<endl;
				f<<j<<k;
				break;
			}
			}
			if(size==l){
				break;
			}}
			if(size!=l){
			left(a,f);
		}
					  
					
}
void left( string a,fstream &f){
	int	l=a.size();

int size=0;


			for(int j=0;j<row;j++){
				size=0;
				for(int k=col-1;k>=0;k--){
					
					if(a[size]==array[j][k] ) //both conditons required to be true ie if first and second index of the input string matches the one on the 2d array puzzel 
					  { size++;
					  }
		
			if(size==l){
			
				cout<<j<<k+(size-1);
				f<<j<<k+(size-1)<<endl;
				break;
			}
			}
			if(size==l){
				break;
			}}
			if(size!=l){
				
				down(a,f);
			}}

void up(string a,fstream &f){
	int l=a.size(),flag=0;
	int size=0;


			for(int j=0;j<col;j++){
				size=0;
				for(int k=row-1;k>=0;k--){
					
					if(a[size]==array[k][j] ) 
					//both conditons required to be true ie if first and second index of the input string matches the one on the 2d array puzzel 
					  { size++;
					  }
		
			if(size==l){
			
				cout<<k+(size-1)<<j;
				f<<k+(size-1)<<j<<endl;
				
				break;
			}
			}
			if(size==l){
				 flag=1;
				break;
			}}
			
			if(flag!=1)
			cout<<"n"<<endl;
			f<<"n"<<endl;}


void down(string a,fstream &f){ int	l=a.size();

int size=0;


			for(int j=0;j<col;j++){
				size=0;
				for(int k=0;k<row;k++){
					
					if(a[size]==array[k][j] ) 
					//both conditons required to be true ie if first and second index of the input string matches the one on the 2d array puzzel 
					  { size++;
					  }
		
			if(size==l){
		
				
				cout<<k-(size-1)<<j;
				f<<k-(size-1)<<j<<endl;
				break;
			}
			}
			if(size==l){
				break;
			}}
			if(size!=l)
			up(a,f);}
	void search(){
	fstream f;	
		int l;
		int n;
		string a;
		
	f.open("output.txt",ios::out);
		
	cout<<"enter number of words you want to search";
		cin>>n;
			f<<n<<endl;
			for(int i=0;i<n;i++){
			
			cin>>a;
			f<<a<<endl;
	
	right(a,f);
			 }		
				
				f.close();
				}
		
		
		
		
		
	
};
int main(){
	int i,j;
	cout<<"enter row and column size";
	cin>>i>>j;
	puzzel p(i,j);
	p.input();
	p.output();
	p.search();
	p.~puzzel();
	
}
