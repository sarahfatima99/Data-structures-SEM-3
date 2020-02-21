#include<iostream>
using namespace std;
class publication{
	protected:
	string title;
	float price;
	public:
   void getdata(){
   	cout<<"input title, price,pagecout,minutes";
   	cin>>title>>price;
   	
   }
   void display(){
   	cout<<"title:"<<title<<"\nprice:"<<price;
   }
};
class book:public publication{
	int pagecount;
	public:
	void getdata(){
		publication::getdata();
		cin>>pagecount;
	}
	void display(){
		publication::display();
		cout<<"\npagecount:"<<pagecount;
	}
};
class tape:public publication{
	int minutes;
	public:
	void getdata(){
	
	cin>>minutes;
}
void display(){
	cout<<"\nminutes"<<minutes;
}
};
int main(){
	book b;
	b.getdata();
	tape t;
	t.getdata();
	b.display();
	t.display();
	
}
