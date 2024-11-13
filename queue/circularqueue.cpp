#include<iostream>
using namespace std;

class Queue{

	int *arr;
	int cs;
	int ts;
	int f;
	int r;
	public:

	Queue(int s){
		arr=new int[s];
		cs=0;
		ts=s;
		f=0;
		r=-1;

	}
	void push(int d){
		if(cs<ts){
		r=(r+1)%ts;
		arr[r]=d;
		cs++;
	}
	else{
		cout<<"overflow "<<endl;
	}
	}


	void pop(){
		if(cs>0){
		f=(f+1)%ts;
		cs--;
	}
	else{
		cout<<"underflowflow "<<endl;
	}
	}

	int size(){
		return cs;
	}
	bool empty(){
		return cs==0;
	}

	int front(){
		return arr[f];
	}
};

int main(){
	Queue q(5);
	q.push(8);
	q.push(18);
	q.push(28);
	q.push(12);
	q.push(14);
	q.pop();
	q.pop();
	q.pop();
	q.push(74);
	q.push(65);
	q.push(90);
	q.pop();
	q.pop();
	while(!q.empty()){
	cout<<q.front()<<" ";
	q.pop();
}
	

	return 0;
}