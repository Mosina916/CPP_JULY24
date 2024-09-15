#include <iostream>
using namespace std;

// // n start 1
// int fibo(int n){
// 	// base case
// 	if(n==1){
// 		return 0;
// 	}
// 	if(n==2){
// 		return 1;
// 	}


// 	// rec case
// 	return fibo(n-1)+fibo(n-2);
// }
// n start 0
int fibo(int n){
	// base case
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}
	// rec case
	return fibo(n-1)+fibo(n-2);
}
int main(){
	int n;
	cin>>n;//find nth fibo no. 5
	cout<<fibo(n)<<endl;
	return 0;
}