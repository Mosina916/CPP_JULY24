#include<iostream>
#include<vector>
using namespace std;
template<typename U>
class Stack{
	// vector<int> v;

	// vector<char> v;
	vector<U> v;
public:
	// push
	// void push(char d){
	void push(U d){
		v.push_back(d);


	}
	// pop
	void pop(){
		v.pop_back();
	}

	// top
	// char top(){
	U top(){
		return v[v.size()-1];
	}
	// empty
	bool empty(){
		return v.size()==0;
	}


	// size

	int size(){
		return v.size();
	}

};

int main(){
	Stack<int>s;
	// s.push(4);
	// s.push(49);
	// s.push(32);
	// s.push(42);
	// s.push(43);

	s.push('A');
	s.push('s');
	s.push('P');



	// cout<<s.v[2]<<endl;

	while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}

cout<<endl;




	

	return 0;
}