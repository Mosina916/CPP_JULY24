#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;//13-->1101
	int co=0;


	while(n!=0){
		if((n&1)==1){
		co++;//3
	}
	n=n<<1;//0

	}

	cout<<co<<endl;
	





	return 0;
}