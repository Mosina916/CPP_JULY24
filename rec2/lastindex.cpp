#include<iostream>
using namespace std;
int lastindexofkey(int *arr,int n,int key,int i){
	if(i<0){
		return -1;
	}

	if(arr[i]==key){//6==6
		return i;

	}
	return lastindexofkey(arr,n,key,i-1);
}
int main(){
	int arr[]={3,7,6,4,6,2,6,9,6,1};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;//70
	


	int indx=lastindexofkey(arr,n,key,n-1);
	if(indx<0){
		cout<<"key is not present"<<endl;
	}
	else{
		cout<<"key is present at index "<<indx<<endl;
	}

	


	return 0;
}