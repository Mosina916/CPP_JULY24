#include<iostream>
using namespace std;
int main(){

	char arr[100];
	cin>>arr;

	for (int i = 0; i <=4; ++i)
	{
		cin>>arr[i];
	}



	// char arr[]={'A','B','G','D','\0'};

	cout<<arr<<endl;

	for (int i = 0; i <=3; ++i)
	{
		cout<<arr[i];
	}

	// int arr1[]={2,4,5,3,6};

	// int arr[100];
	// for (int i = 0; i <=4; ++i)
	// {
	// 	cin>>arr[i];
	// }

	int n=sizeof(arr)/sizeof(int);

	cout<<arr1<<endl;

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}





	return 0;
}