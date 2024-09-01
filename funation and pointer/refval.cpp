#include<iostream>
using namespace std;
f(int &n){
	n=n+10;
	cout<<n<<endl;
}
int main(){
	int a=10;
	f(a);

	cout<<a<<endl;
	
	


	return 0;
}