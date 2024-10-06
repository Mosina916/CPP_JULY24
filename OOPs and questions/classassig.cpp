#include<iostream>
using namespace std;
int f(int n){
	if(n<=0){
		return 1;
	}


	return f(n-1)+f(n-2);
}

int main(){
	int t;
	cin>>t;
	for (int i = 1; i <=t; ++i)
	{
		int n;
		cin>>n;
		int x=f(n);
		cout<<"#"<<i<<" : "<<x<<endl;

	}
	



	return 0;
}