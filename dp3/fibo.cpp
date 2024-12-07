#include<iostream>
#include<queue>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n==0){
		cout<<0<<endl;
		return 0;
	}

	if(n==1){
		cout<<1<<endl;
		return 0;
	}



	int c;
	int a=0;
	int b=1;

	for(int i=1;i<=n-1;i++){
	c=a+b;
	a=b;
	b=c;
}

cout<<c<<endl;


	return 0;
}