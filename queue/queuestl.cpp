#include<iostream>
#include<queue>
using namespace std;
int main(){
	// queue<datatype> name;
	queue<int> q;
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