#include<iostream>
#include<vector>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}

};
class Stack{
	node*head;
	int l;
public:
	Stack(){
		head=NULL;
		l=0;

	}
	
	void push(int d){//5

		node*ptr=new node(d);
		ptr->next=head;
		head=ptr;
		l++;
		

	}
	// pop
	void pop(){
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
		l--;

	
	}

	// top
	int top(){
		return head->data;


	}
	// empty
	bool empty(){
		return head==NULL;
		
	}


	// size

	int size(){
		return l;
		
	}

};

int main(){
	Stack s;
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