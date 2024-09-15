#include <iostream>
using namespace std;
// int sumusingrec(int arr[],int n){
// 	// base case
// 	if(n==0){
// 		return 0;
// 	}


// 	// rec  case
// 	return sumusingrec(arr,n-1)+arr[n-1];

// }

// int sumusingrec2(int arr[],int n){
// 	// base case
// 	if(n==0){
// 		return 0;
// 	}


// 	// rec  case
// 	return arr[0]+sumusingrec2(arr+1,n-1);

// }

int sumusingrec3(int arr[],int n,int i){//5
	// base case
	if(i==n){
		return 0;
	}


	// rec  case
	return arr[i]+sumusingrec3(arr,n,i+1);//3+2+6+5+1+0

}
int main(){
	int arr[]={3,2,6,5,1};
	int n=sizeof(arr)/sizeof(int);
	cout<<sumusingrec3(arr,n,0);

	
	return 0;
}