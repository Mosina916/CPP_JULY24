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
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);

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
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
	node* root=buildtree();

	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;





	return 0;
}