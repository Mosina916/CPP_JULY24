#include<iostream>
using namespace std;
bool checkkey(int *arr,int n,int key){
	// base case
	if(n==0){
		return false;
	}


	// reccase
	if(arr[0]==key||checkkey(arr+1,n-1,key)){
		return true;

	}
	return false;


}
// bool checkkey(int *arr,int n,int key){
// 	// base case
// 	if(n==0){
// 		return false;
// 	}


// 	// reccase
// 	if(arr[n-1]==key||checkkey(arr,n-1,key)){
// 		return true;

// 	}
// 	return false;


// }

int main(){
	int arr[]={3,1,6,7,13};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;//70


	if(checkkey(arr,n,key)==true){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;
	}

	


	return 0;
}