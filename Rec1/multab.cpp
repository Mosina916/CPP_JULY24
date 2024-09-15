#include <iostream>
using namespace std;
int mult(int a,int b){//3427
	// b case
	if(b==0){
		return 0;
	}
	
	// rec case
	
	return a+mult(a,b-1);
	

}
int main(){
	int a,b;
	cin>>a>>b;//3 5
	cout<<mult(a,b)<<endl;//0


	return 0;
}