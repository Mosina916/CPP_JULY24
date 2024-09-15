#include <iostream>
using namespace std;
int expo(int a,int b){//3427
	// b case
	if(b==0){
		return 1;
	}
	
	// rec case
	
	return a*expo(a,b-1);
	

}
int main(){
	int a,b;
	cin>>a>>b;//2 4
	cout<<expo(a,b)<<endl;//0


	return 0;
}