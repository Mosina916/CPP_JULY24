#include<iostream>
using namespace std;
class node{
public:
	int d;
	node* next;
	node* prev;
	node(int data){
		d=data;
		next=NULL;
		prev=NULL;
	}
};

void insertatail(node*&head,node*&tail,int data){//9
	if(head==NULL and tail==NULL){
		node*ptr=new node(data);
		head=ptr;
		tail=ptr;
	}
	else{
		node*ptr=new node(data);
		tail->next=ptr;
		ptr->prev=tail;
		tail=ptr;

	}

}
