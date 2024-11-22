#include<iostream>
#include<queue>
using namespace std;

int main(){
	int no;
	cin>>no;
	int ans=0;
	for (int i = 1; i <=no; ++i)
	{
		int n;
		cin>>n;
		ans=ans^n;


	}

	cout<<ans<<endl;

	


	return 0;
}