#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
class dsa{
	protected:
	int *darray;
	int n;
	public:
		dsa(){
		}
		dsa(int n1){
			n=n1;
			darray=new int[n];
		}
		~dsa(){
			delete [] darray;
			darray=NULL;
			
		}
		int &operator [](int i){
			if(i<0 || i>n-1){
				cout<<"out of bound";
				
			}
			else return *(darray+i);
		}
		
		void fillarray(){
			cout<<"enter elemnets of array";
			for(int i=0;i<n;i++){
				cin>>*(darray+i);
				
			}
		}
		void search(int x){
			for(int i=0;i<n;i++){
				if(*(darray+i)==x){
					cout<<"found at index "<<i;
				
				}
				
				
			
			}
				
		}
		void insertion(){
			int x;
			cout<<"input number of elements you want to insert";
			cin>>x;
			
		dsa::arrayresize(n+x);
			for(int i=n;i<n+x;i++){
				cout<<"enter value "<<endl;
				cin>>darray[i];
			}
			
			cout<<"your array looks like";
			for(int i=0;i<n+x;i++){
				cout<<darray[i]<<endl;
			}
		}
		void arrayresize(int nsize){
			
			
			int *temp=new int[n];
			for(int i=0;i<n;i++){
				*(temp+i)=*(darray+i);
			}
			delete [] darray;
			darray=NULL;
			darray=new int[nsize];
			memset(this->darray, 0, sizeof(int)*nsize);
			
			
			for(int i=0;i<n+1;i++){
				*(darray+i)=*(temp+i);
			}
			delete [] temp;
			temp=NULL;
			
			
		}
};
class unordered:public dsa{
	public:
		unordered(){
			cout<<"\nin unordered";
		}

	
};
class ordered:public dsa{
	public:
	void sort(){
		int swap;
		 for (int c = 0 ; c < n - 1; c++)
  {
    for (int d = 0 ; d < n - c - 1; d++)
    {
      if (darray[d] > darray[d+1]) /* For decreasing order use < */
      {
        swap       = darray[d];
        darray[d]   = darray[d+1];
        darray[d+1] = swap;
      }
    }
        
  
			}
			}
		};
	int main(){
		int n;
		cout<<"enter index size"<<endl;
		cin>>n;
		dsa d(n);
		d.fillarray();
		unordered u;
		cout<<"\n//UNORDERED";
		d.insertion();
		cout<<"enter element you want to search";
		int x;
		cin>>x;
		u.search(x);
		ordered o;
		o.sort();
		o.insertion();
		o.search(x);
		d.~dsa();
		
	}

