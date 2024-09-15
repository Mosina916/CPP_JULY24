#include<iostream>
using namespace std;
int firstindexofkey(int *arr,int n,int key,int i){
	if(i==n){
		return -10;
	}

	if(arr[i]==key){//6==6
		return i;

	}
	return firstindexofkey(arr,n,key,i+1);
}
int main(){
	int arr[]={3,7,6,4,6,2,6,9,6,1};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;//70
	


	int indx=firstindexofkey(arr,n,key,0);
	if(indx<0){
		cout<<"key is not present"<<endl;
	}
	else{
		cout<<"key is present at index "<<indx<<endl;
	}

	


	return 0;
}