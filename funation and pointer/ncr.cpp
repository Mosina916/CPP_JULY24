#include <iostream>
using namespace std;
int fact(int n){
	int ans=1;
	for(int i=n;i>=1;i--){
	ans=ans*i;
	}
	return ans;

}
int ncr(int a,int b){
	int fans=fact(a)/(fact(b)*fact(a-b));
	return fans;
}
int main(){
	int n,r;
	cin>>n>>r;
	cout<<ncr(n,r)<<endl;
	
	return 0;
}

