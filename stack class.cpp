#include<iostream>
using namespace std;
class stack{
	private:
		int size, top;
		char exp[10];
		char temp;
		public:
			stack(){
				top=-1;
			}
			void push(char s){
					top++;
				exp[top]=s;
			
			}
			char pop(){
				
				temp=exp[top];
				--top;
				return temp;
			}
			bool isempty(){
				if(top==-1){
					return 1;
				}
				else return 0;
			}
			void display(){
				int i;
				cout<<"your stack contains items";
				for(i=top;i>=0;i--){
					cout<<exp[i]<<endl;
					
	
				}
			}
			char topp(){
				return exp[top];
			}
};
int main(){
	stack s1;
	string s;
s="{2+1(3)}";
	int flag;
	for(int i=0;i<s.size();i++){
		if(s[i]=='[' || s[i]=='{' || s[i]=='(')
		s1.push(s[i]);
		cout<<s1.topp();
		
flag=1;
	
	if(!s1.isempty()){
		
			
		if(s[i]==']'){
			if(s1.topp()=='[')
			s1.pop();
		
		else break;
	}
			
			
		if(s[i]=='}'){
			if(s1.topp()=='{')
			s1.pop();
		
		else break;
	}
	
			
		if(s[i]==')'){
			if(s1.topp()=='(')
			s1.pop();
		
		else break;
	}else break;}}
	  if ((s1.isempty()) && (flag == 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
}
//s1.display();}


