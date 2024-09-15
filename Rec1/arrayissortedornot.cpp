#include <iostream>
using namespace std;


// bool isarraysorted(int *arr,int n){//1
// 	// base case'
// 	if(n==1){
// 		return true;
// 	}


// 	// /rec case
// 	if(isarraysorted(arr,n-1) and arr[n-2]<=arr[n-1]){
// 		return true;
// 	}
// 	return false;
// }

bool isarraysorted2(int *arr,int n){//4
	// base case'
	if(n==1){
		return true;
	}


	// /rec case
	if(isarraysorted2(arr+1,n-1) and arr[0]<=arr[1]){
		return true;
	}
	return false;
}

int main(){
	int arr[]={2,3,4,17,22};
	int n=sizeof(arr)/sizeof(int);
	if(isarraysorted2(arr,n)==true){
		cout<<"sorted"<<endl;
	}
	else{
		cout<<"not sorted"<<endl;

	}
	

	
	return 0;
}