#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int> s;
	s.push(4);
	s.push(49);
	s.push(32);
	s.push(42);
	s.push(43);


	
	while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}

cout<<endl;


	


	

	return 0;
}