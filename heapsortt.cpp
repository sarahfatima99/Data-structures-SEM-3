#include<iostream>
using namespace std;
void heapify(int arr[],int n, int i){
	int largest=i;
	int l= 2*i+1;
	int r=2*i+2;
	

if(r<n &&arr[r]>arr[largest]){
	largest=r;
}
if(l<n && arr[l]>arr[largest]){
	largest=l;
}
if(largest!=i){
	swap(arr[i],arr[largest]);
	heapify(arr,n,largest);
}}
void heapsort(int arr[],int n){
	for(int i=n/2-1;i>=0;i--)
	heapify(arr,n,i);
for(int i=n-1;i>=0;i--){
	swap(arr[0],arr[i]);
heapify(arr,i,0);}
}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[10],x=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<10;i++){
	cin>>x;
	arr[i]=x;
	heapsort(arr,i);
	print(arr,i);}
}

