#include<iostream>
using namespace  std;
int main(){
	int n;
	cin>>n;//5

	int no;
	cin>>no;//-3

	int atl=no;//-3;

	for (int i = 1; i<=n-1; ++i)
	{
			cin>>no;//3 2 6 4
	if(no>atl){
		atl=no;//6
	}

	}


	cout<<atl<<endl;

	return 0;
}