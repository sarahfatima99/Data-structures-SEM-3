#include<iostream>
using namespace std;
int main(){
	cout<<"enter rows and column";
	
	int row,col;
	int a[row][col];
	cin>>row>>col;
 for(int i=0;i<row;i++){                       // enter original array data 
        for(int j=0;j<col;j++)
            cin>>a[i][j];
    }
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	int n=0;
	int n1=col;
	int temp;
    while(n1!=n){
    	for(int i=0;i<row;i++){
    		temp=a[i][n1];
    		a[i][n1]=a[i][n];
    		a[i][n]=temp;
		}
		n1--;
		n++;
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
		cout<<a[i][j]<<" ";}
		cout<<endl;
	}
}
