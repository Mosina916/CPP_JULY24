#include<iostream>
using namespace std;
void inc(int n){
	// base case
	if(n==0){
		return;
	}


	// rec case
	
	inc(n-1);
	cout<<n<<" ";
}
int main(){
	int n;
	cin>>n;
	inc(n);


	return 0;
}