#include <iostream>
using namespace std;
int fact(int n){
	// 5*4*3*2*1
	int ans=1;

	for(int i=n;i>=1;i--){
	ans=ans*i;//1*5-->20*3-->60*2-->120
	}
	return ans;

}
int main(){
	int n;
	cin>>n;//5
	cout<<fact(n)<<endl;

	
	return 0;
}

