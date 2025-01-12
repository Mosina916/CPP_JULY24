#include <iostream>
using namespace std;
bool compt(int a,int b){
	return a>b;
}
int main(){
	int n;
	cin>>n;//5


	int arr[1000];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}

	// 3 2 4 1 5

	sort(arr,arr+n,compt);//1 2 3 4 5
	// sort(arr,arr+n,compt);//lexo
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

// 	bat
// apple
// batman




	return 0;
}