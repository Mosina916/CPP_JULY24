#include <iostream>
using namespace std;
void f(int &a){//10
	a=a+10;
	cout<<a<<endl;//20
}

int main(){
	int a;
	cin>>a;//10
	cout<<a<<endl;//10
	f(a);//refren
	cout<<a<<endl;//20

	return 0;
}