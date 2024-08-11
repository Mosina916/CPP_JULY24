#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;//6

	int abhitakkaxor=0;


	// 1 to 6
	int i=1;
	while(i<=n){
		abhitakkaxor=i^abhitakkaxor;//1^2^3^4^5^6
		i=i+1;//i++
	}


	int no;

	int j=1;
	while(j<=n-1){
		cin>>no;//2
	abhitakkaxor=abhitakkaxor^no;
	j++;

	}

	cout<<abhitakkaxor<<endl;
	


	



	return 0;
}