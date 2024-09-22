#include<iostream>
using namespace std;
int bsusingrec(int *arr,int s,int e,int key){
	// bc
	if(s>e){
		return -1;

	}
	// rc

	int mid=(s+e)/2;//3
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]>key){
		return bsusingrec(arr,s,mid-1,key);
	}
	else{
		return bsusingrec(arr,mid+1,e,key);
	}

}
int main(){
	int arr[]={3,5,6,8,9,11,14};
	int n=sizeof(arr)/sizeof(int);//7
	int key;
	cin>>key;//7
	cout<<bsusingrec(arr,0,n-1,key)<<endl;
	

	return 0;
}