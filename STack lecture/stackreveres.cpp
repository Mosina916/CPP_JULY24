#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int ele){
	if(s.empty()){
		s.push(ele);
		return;
	}
	int x=s.top();
	s.pop();
	insertatbottom(s,ele);
	s.push(x);
}
void reversestack(stack<int> &s){
	if(s.empty()){
		return;

	}
	int ele=s.top();//43
	s.pop();//

	reversestack(s);

	insertatbottom(s,ele);

}
int main(){
	stack<int> s;
	s.push(4);
	s.push(49);
	s.push(32);
	s.push(42);
	s.push(43);

	reversestack(s);


	
	while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}

cout<<endl;


	


	

	return 0;
}