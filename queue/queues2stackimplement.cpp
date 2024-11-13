#include<iostream>
#include<queue>
using namespace std;

class stack{
	queue<int> q1;
	queue<int> q2;
public:
	void push(int d){
		if(q1.empty() and q2.empty()){
			q1.push(d);
		}
		else if(!q1.empty() and q2.empty()){
			q1.push(d);
		}
		else{
			q2.push(d);

		}

	}

	void pop(){
		if(q1.empty() and q2.empty()){
			return;
		}

		else if(!q1.empty() and q2.empty()){
		while(q1.size()>1){
		q2.push(q1.front());
		q1.pop();
	}
	q1.pop();
	}
	else if(q1.empty() and !q2.empty()){
		while(q2.size()>1){
		q1.push(q2.front());
		q2.pop();
	}
	q2.pop();
	}
}


	bool empty(){
		return q1.size()+q2.size()==0;
	}

	int size(){
		return q1.size()+q2.size();

	}


	int top(){
		int x=-1;
		if(!q1.empty() and q2.empty()){
		while(q1.size()>1){
		q2.push(q1.front());
		q1.pop();
	}
	x=q1.front();
	q2.push(q1.front());
	q1.pop();
	
	}
	else if(q1.empty() and !q2.empty()){
		while(q2.size()>1){
		q1.push(q2.front());
		q2.pop();
	}
	x=q2.front();
	q1.push(q2.front());
	q2.pop();
	
	}
	return x;
}


};

int main(){
	stack s;
	s.push(30);
	s.push(7); 

	s.push(17);
	s.push(27);
	s.push(77);
	s.pop();
	s.push(24);
	s.push(94);
	s.pop();


	while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}
	

	return 0;
}