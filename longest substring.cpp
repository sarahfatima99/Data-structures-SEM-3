#include<iostream>
using namespace std;
int main() {
    string a = "hhhhahmediaiia";
    string b = "isadahmedasdasdasdasdasd";
    int n1 = a.size(),row=0,col=0,maxVal=0;
    int n2 = b.size();
    int arr[n1][n2];
    for(int i=0;i<n1;i++) for(int j=0;j<n2;j++) arr[i][j] = 0;
    for(int i=0;i<n1;i++) {
    	for(int j=0;j<n2;j++) {
    		if(a[i] == b[j]) {
    			if(j==0 || i==0) arr[i][j] = 1;
    			else arr[i][j] = arr[i-1][j-1]+1;
			
		}
		}
}
for(int i=0;i<n1;i++){
	for(int j=0;j<n2;j++){
		cout<<arr[i][j];
	}
	cout<<endl;
}}
