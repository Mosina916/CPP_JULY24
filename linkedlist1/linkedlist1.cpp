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
// int*ptr=new int ;
// int y=10;
// int x=y;
void insertatfront(node*&head,node*&tail,int data){
	if(head==NULL and tail==NULL){
		// ll abhi nhi bani
		node*ptr=new node(data);//dma node
		head=ptr;
		tail=ptr;

	}
	else{
		node*ptr=new node(data);
		ptr->next=head;
		head=ptr;
	}

}

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
// void f(int &s){
// 	s=s+10;
// 	cout<<s<<endl;

// }


void printll(node*head){


// 	node*temp=head;//100;
// 	while(temp!=NULL){
// 	cout<<temp->d<<" ";//30 4 3
// 	temp=temp->next;
// }

	while(head!=NULL){
	cout<<head->d<<" ";//30 4 3
	head=head->next;
}

}


void deleteathead(node*&head,node*&tail){
	if(head==NULL){
		// ll is empty
		return;


	}
	else if(head->next==NULL){
		// singlenode
		delete head;
		head=NULL;
		tail=NULL;
	}
	else{
		// multipl
		node*temp=head;

		head=head->next;

		delete temp;
		temp=NULL;
	}
}


void deleteattail(node*&head,node*&tail){
	if(head==NULL){
		// ll is empty
		return;


	}
	else if(head->next==NULL){
		// singlenode
		delete head;
		head=NULL;
		tail=NULL;
	}
	else{
		node*temp=head;
		while(temp->next!=tail){
		temp=temp->next;
	}

		delete tail;
		tail=temp;
		tail->next=NULL;
	}
}
int lengthll(node*head){
	node*temp=head;
	int c=0;

	while(temp!=NULL){
	c++;
	temp=temp->next;
}
return c;
}

void insertatanypostioninbetween(node*&head,node*tail,int pos,int data){
	if(pos==0){
		insertatfront(head,tail,data);
	}
	else if(pos>=lengthll(head)){
		insertatail(head,tail,data);

	}
	else {
		node*ptr=new node(data);

		node*temp=head;
		for (int i = 1; i <=pos-1; ++i)
		{
			temp=temp->next;
		}

		ptr->next=temp->next;

		temp->next=ptr;


	}

}


void deleteatanypostioninbetween(node*&head,node*tail,int pos){
	if(pos==0){
		deleteathead(head,tail);
	}
	else if(pos>=lengthll(head)-1){
		deleteattail(head,tail);

	}
	else {
		

		node*temp=head;
		for (int i = 1; i <=pos-1; ++i)
		{
			temp=temp->next;
		}

		node*x=temp->next;
		temp->next=x->next;
		delete x;
		x=NULL;

		// node*p=temp->next->next;//250
		// delete temp->next;
		// temp->next=



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

bool searcinll(node*head,int key){
	// base case
	if(head==NULL){
		return false;
	}


	// rec case
	if(head->d==key|| searcinll(head->next,key)){
		return true;
	}

	return false;

}
int main(){

	// int a=10;
	// f(a);

	// cout<<a<<endl;
	node* head=NULL;//sma
	node*tail=NULL;//sma



	insertatfront(head,tail,3);

	insertatfront(head,tail,4);
	insertatfront(head,tail,30);


	insertatail(head,tail,50);

	insertatail(head,tail,60);
	insertatail(head,tail,83);
	insertatail(head,tail,57);


	if(searcinll(head,50)){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;
	}

// 	printll(head);
// 	cout<<endl;
// // 30 4 3 50 60 83 57
// 	deleteatanypostioninbetween(head,tail,4);

// // 
	// insertatanypostioninbetween(head,tail,4,80);

	// deleteathead(head,tail);
	// // 4 3 50
	// deleteattail(head,tail);





	// printll(head);
	// cout<<endl;


	cout<<lengthllrec(head)<<endl;
	// cout<<endl;
	// printll(head);






	return 0;
}