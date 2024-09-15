#include<iostream>
using namespace std;
void  multindexofkey(int *arr,int n,int key,int i){
	if(i==n){
		return;
	}


	if(arr[i]==key){
		cout<<i<<" ";//0
	}

	multindexofkey(arr,n,key,i+1);


}
int main(){
	int arr[]={6,7,6,4,6,2,6,9,6,1};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;//70
	


	multindexofkey(arr,n,key,0);
	
	


	return 0;
}