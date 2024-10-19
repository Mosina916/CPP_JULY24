#include<iostream>
using namespace std;
class node{
public:
	int d;
	node* next;
	node(int data){
		d=data;
		next=NULL;
	}
};
int main(){
	node x(3);
	node y(4);
	// link
	x.next=&y;

	cout<<x.d<<endl;
	// cout<<(*x.next).d<<endl;

	cout<<x.next->d<<endl;






	return 0;
}