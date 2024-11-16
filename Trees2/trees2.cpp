#include<iostream>

using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;

	}
};
node* buildtree(){

	int d;cin>>d;//8//          1
	if(d==-1){
		return NULL;
	}
	node*root=new node(d);//8   2
	root->left=buildtree();   //3
	root->right=buildtree();//  4
	return root;			//  5
}

void preorder(node*root){
	if(root==NULL){ //1 
		return;
	}
	cout<<root->data<<" ";//2
	preorder(root->left);//3
	preorder(root->right);//4

}

void inorder(node*root){
	if(root==NULL){
		return;
	}

	inorder(root->left);
	cout<<root->data<<" ";
	
	inorder(root->right);

}

void postorder(node*root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	
}

int countnodes(node*root){
	if(root==NULL){
		return 0;
	}

	int a=countnodes(root->left); 
	int b=countnodes(root->right);
	return a+b+1;
	
	
}

int sumnodes(node*root){
	if(root==NULL){
		return 0;
	}
	return sumnodes(root->left)+sumnodes(root->right)+root->data;
	
	
}

bool searchnodes(node*root,int key){
	if(root==NULL){
		return false;
	}


	if(root->data==key||searchnodes(root->left,key)||searchnodes(root->right,key)){
		return true;
	}

	return false;

	
}



int height(node*root){//10
	if(root==NULL){
		return 0;
	}

	return max(height(root->left),height(root->right))+1;

	
}


int diameter(node*root){//8
	if(root==NULL){
		return 0;
	}

	int op1=diameter(root->left);//3//both in lst
	int op2=diameter(root->right);//2//both in rst
	int op3=height(root->left)+height(root->right);//1 lst 1rst
	return max(op1,max(op2,op3));
}
class P{
public:
	int di;
	int h;

};

P diameterinon(node*root){
	P z;
	if(root==NULL){
		z.di=0;
		z.h=0;
		return z;
	}
	P x=diameterinon(root->left);
	P y=diameterinon(root->right);
	// z ka set kar rahe hau
	int op1=x.di;
	int op2=y.di;
	int op3=x.h+y.h;//o(n)
	z.di=max(op1,max(op2,op3));//6
	z.h=max(x.h,y.h)+1;
	return z;
}

void mirror(node*root){
	if(root==NULL){
		return;
	}

	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}


// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
	node* root=buildtree();

	mirror(root);

	
	preorder(root);
	cout<<endl;


	// P a=diameterinon(root);
	// cout<<"diameter "<<a.di<<endl;
	// cout<<"height "<<a.h<<endl;


	// cout<<"total nodes are "<<countnodes(root)<<endl;
	// cout<<"sum of nodes are "<<sumnodes(root)<<endl;
	// int key;
	// cin>>key;
	// cout<<"search key  "<<searchnodes(root,key)<<endl;
	// cout<<"height  "<<height(root)<<endl;

	// cout<<"diameter "<<diameter(root)<<endl;


	// preorder(root);
	// cout<<endl;
	// inorder(root);
	// cout<<endl;
	// postorder(root);
	// cout<<endl;





	return 0;
}