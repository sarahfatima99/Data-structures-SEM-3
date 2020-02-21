#include<iostream>
using namespace std;
int dup(int a[],int i,int j,int t){
	if(j<0){
		return t;
	} if(a[i]==a[j])
	
	{
	t++;
	return  (a,i-1,j-1,t);}
	else {
	return	dup(a,i,j-1,t);
	}
}
int main()
 {
  int t,i,arr[20],j,no;
  
  cout<<"Enter Size of array: ";
  cin>>no;
  cout<<"Enter any "<<no<<" num in array: ";
  for(i=0;i<no;i++)
  {
   cin>>arr[i];
  }
  cout<<"Dublicate Values are: ";
  for(i=no; i>=0; i--)
   {
    for(j=i-1;j>=0;j--)
    {
    if(arr[i]==arr[j])
    
    { t++;
    //cout<<" "<<arr[i]<<" "<<t<<" ";
  
    }
   }
   }
   cout<<t<<"yooo\n";
cout<<dup(arr,no,no-1,t);
 }
