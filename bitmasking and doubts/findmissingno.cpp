#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;//6

	long long int sum=n*(n+1)/2;//21


	int sum2=0;

	int no;

	int i=1;
	while(i<=n-1){
		cin>>no;//5
	sum2=sum2+no;//18
	i=i+1;

	}

	cout<<sum-sum2<<endl;
	




	return 0;
}