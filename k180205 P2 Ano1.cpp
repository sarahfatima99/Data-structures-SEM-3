#include <iostream>
#include <cstdlib>
#include<string.h>
#include<fstream>
using namespace std;


class maze{
    int cols;
    int rows;
    int **array;
    public:
    
    maze(){
        rows=0;
        cols=0;
        array=NULL;
        
            
        
    }
    maze(int row, int col){
        rows=row;
        cols=col;
        array = new int*[rows];
        for( int i = 0 ; i < rows ; i++ ){
           array[i] = new int [cols];
        }
            
        
    }
    
    ~maze(){
        
        if (array != 0)
         {
             for (int i=rows-1; i>=0; i--)
            {
                if (array[i] != 0)
                   delete [] array[i];
                   
            }
            delete [] array;
         }
         array = NULL;

        
    }
   
    void fillarray()
	{
		    for (int i=0;i<rows;i++){
		        for (int j=0;j<cols;j++){
		            int value;
		            cout<<"enter values";
		            cin>>value;
		            array[i][j] = value;
		        }
		        
		    }
	}
	
	
    int &operator ()(int i, int j){
        if(i<0 || i> rows-1 || j<0 || j>  cols-1 ) {
            cout << "Boundary Error\n";
            exit(1);

        }
    return array[i][j];
    }

    int findapathright( int i,int j){
    	if(array[i][j]==1 ) //this condition will check if there is an obstacle( ie 1) if yes then it will return 0 which will add up to the base condition
    	{
    		return 0;
		}
		if(i==rows-1 && j==cols-1){ //this conditoon will check if the index has reached to the limit ie at the end
			return 1;
		}
	 
		if(array[i][j]==0){	 //this condition will check if next index value consist of zero
			if(i==rows-1){  //this condtion will check if the increasing row index has reached to the limit. If yes the only column will be increemented
		return	findapathright(i,j+1);
		}
		
		if(j==cols-1){ // same as above but in this case, its column and row will be increemented
			return findapathright(i+1,j); 
		} else	
			return findapathright(i+1,j)+findapathright(i,j+1);// this is a recursive call to find out number of ways there are to reach the end of maze
			                                                 // the first recursive call will check if there is a path to the right. the second recursive call will check if there is a path to the left
			                                                 //both fucntions will in the end return value to add up to the final return call;
		}}


void display(){
	fstream f;
	f<<rows<<cols<<"\n";
	f.open("input2.txt",ios::out);
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			f<<array[i][j];
			cout<<array[i][j];
		}
		f<<"\n";
	cout<<"\n";
	}
	f.close();
	
}
	
	
	
    };
int main(){
	fstream q;
	q.open("output2.txt",ios::out);
	cout<<"enter no of rows and columns";
	int col,row;
	cin>>row>>col;
	maze m(row,col);
	m.fillarray(); 
	m.display(); 
 int l= m.findapathright(0,0);
 cout<<l;
q<<l;
q.close();
	
	m.~maze();
}
