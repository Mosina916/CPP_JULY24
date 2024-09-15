#include <iostream>
using namespace std;
int sumofdigi(int n){//3427
	// b case
	if(n==0){
		return 0;
	}
	
	// rec case
	
	return n%10+sumofdigi(n/10);
	

}
int main(){
	int n;
	cin>>n;//3427
	cout<<sumofdigi(n)<<endl;//0


	return 0;
}