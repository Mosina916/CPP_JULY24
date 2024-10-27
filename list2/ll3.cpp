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


void insertatail(node*&head,node*&tail,int data){
	if(head==NULL and tail==NULL){
		node*ptr=new node(data);
		head=ptr;
		tail=ptr;
	}
	else{
		node*ptr=new node(data);
		tail->next=ptr;
		tail=ptr;

	}

}


void printll(node*head){
	while(head!=NULL){
	cout<<head->d<<" ";//30 4 3
	head=head->next;
}

}


int lengthllrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}
	// rec case
	return lengthllrec(head->next)+1;


}

node* midpointofll(node*head){
	// node*temp1=head;
	node*temp1=head->next;
	node*temp2=head;

	while(temp1!=NULL and temp1->next!=NULL){
	temp1=temp1->next->next;//null 
	temp2=temp2->next;
}

return temp2;


}

void bubblesortll(node*head){

	for(int i=0;i<=lengthllrec(head)-2;i++){
		for(node*temp=head;temp->next!=NULL;temp=temp->next){ //optimization
			if(temp->d>temp->next->d){
				swap(temp->d,temp->next->d);


			}
		}
	}


}


int kthnodefronend(node*head,int k){
	node*x=head;
	node*y=head;

	for (int i = 1; i <=k-1; ++i)
	{
		y=y->next;

	}


	while(y->next!=NULL){
		x=x->next;
		y=y->next;
	}


	return x->d;

}

node* mergetwosortedll(node*head1,node*head2){
	// base case
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	node*newhead=NULL;
	// rec case
	if(head1->d<head2->d){
		newhead=head1;
		newhead->next=mergetwosortedll(head1->next,head2);
		// return newhead;
	}
	else{
		newhead=head2;
		newhead->next=mergetwosortedll(head1,head2->next);
		// return newhead;
	}
	return newhead;
}


node* mergesortll(node*head){
	if(head==NULL){
		return head;
	}
	if(head->next==NULL){
		return head;
	}


	node*m=midpointofll(head);

	node*x=m->next;
	m->next=NULL;
	node*a=mergesortll(head);//5 3 1-->1 3 5
	node*b=mergesortll(x);//4 2-->2 4
	return mergetwosortedll(a,b);
}


int main(){

	// node* head=NULL;//sma
	// node*tail=NULL;//sma

	// int n;
	// cin>>n;//5
	// for (int i = 0; i <n; ++i)
	// {
	// 	int data;
	// 	cin>>data;
	// 		insertatail(head,tail,data);

	// }


	node* head1=NULL;//sma
	node*tail1=NULL;//sma

	int n;
	cin>>n;//5
	for (int i = 0; i <n; ++i)
	{
		int data;
		cin>>data;
			insertatail(head1,tail1,data);

	}//1 3 5 8 9


	// node* head2=NULL;//sma
	// node*tail2=NULL;//sma

	// int m;
	// cin>>m;//5
	// for (int i = 0; i <m; ++i)
	// {
	// 	int data;
	// 	cin>>data;
	// 		insertatail(head2,tail2,data);

	// }//0 4 6 7 
	// node*a=mergetwosortedll(head1,head2);
	// printll(a);

	node* d=mergesortll(head1);
	printll(d);



	// printll(head);
	// cout<<endl;
	// bubblesortll(head);

	// int k;
	// cin>>k;

	// cout<<kthnodefronend(head,k)<<endl;



	// node*x=midpointofll(head);
	// cout<<x->d<<endl;



	// printll(head);
	





	return 0;
}