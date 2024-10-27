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


// int interstionoftwoll(node*head1,node*head2){
// 	int l1=lengthllrec(head1);//
// 	int l2=lengthllrec(head2);//
// 	 node* temp=NULL;
// 	if(l1>l2){
// 		int k=l1-l2;
// 		 node* temp=head1;
// 		for(int jump=1;jump<=k;jump++){
// 			temp=temp->next;

// 		}


// 		while(temp->data!=head2->data){

// 		temp=temp->next;
// 		head2=head2->next;

// 		}
// 		// return temp->data;
		


// 	}
// 	else{
// 		int k=l2-l1;
// 		 node* temp=head2;
// 		for(int jump=1;jump<=k;jump++){
// 			temp=temp->next;

// 		}


// 		while(temp->data!=head1->data){

// 		temp=temp->next;
// 		head1=head1->next;

// 		}
// 		// return temp->data;

// 	}

// 	return temp->data;


// }


node* reverse(node*head){

	node*curr=head;
	node*prev=NULL;
	while(curr!=NULL){
	node*aage=curr->next;
	curr->next=prev;
	prev=curr;
	curr=aage;

}
return prev;

}




node*kreverse(node*head,int k){
	if(head==NULL){
		return NULL;
	}
	node*temp=head;
	for(int i=1;i<=k-1;i++){
		temp=temp->next;
	}
	node*x=temp->next;
	temp->next=NULL;

	node*a=reverse(head);
	node*y=kreverse(x,k);
	node*d=a;
	for(int i=1;i<=k-1;i++){
		d=d->next;
	}
	d->next=y;
	return a;


}


bool checkcycle(node*head){
	node*p1=head;
	node*p2=head;

	while(p1!=NULL and p1->next!=NULL){
		p1=p1->next->next;
	p2=p2->next;
	if(p1==p2){
		return true;
	}
	}

	return false;
	
}


void createcycle(node*head,int k){//1 2 3 4 5 6 7 8 
	node*temp=head;
	for(int jump=1;jump<=k-1;jump++){
		temp=temp->next;
	}
	node*x=head;
	while(x->next!=NULL){
		x=x->next;
	}

	x->next=temp;
}


void breakcycle(node*head){//1 2 3 4 5 6 7 8 
	bool kyacyclelehai=false;
	// check is cycle present
	node*slow=head;
	node*fast=head;

	while(fast!=NULL and fast->next!=NULL){
	slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
		kyacyclelehai=true;
		break;

	}
}
	if(kyacyclelehai==true){
		// tou hi break karo;
		slow=head;

		while(slow->next!=fast->next){
		slow=slow->next;
		fast=fast->next;
	}
	fast->next=NULL;


	}

}





int main(){

	node* head=NULL;//sma
	node*tail=NULL;//sma

	int n;
	cin>>n;//5
	for (int i = 0; i <n; ++i)
	{
		int data;
		cin>>data;
			insertatail(head,tail,data);//1 2 3 4 5 6 7 8

	}
	int k;
	cin>>k;

	createcycle(head,k);

	if(checkcycle(head)){
		cout<<"cycle is present"<<endl;

	}
	else{
		cout<<"cycle is  not present"<<endl;

	}
	breakcycle(head);




	printll(head);
	// int k;
	// cin>>k;

	// node*q=kreverse(head,k);

	// // cout<<endl;
	// // node*a=reverse(head);
	// printll(q);


	




	return 0;
}