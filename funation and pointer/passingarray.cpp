#include <iostream>
using namespace std;

void f(int b[],int x){
	for (int i = 0; i <x; ++i)
	{
		b[i]=b[i]+10;
	}

	for (int i = 0; i <x; ++i)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;//12 13 14 15

}
int main(){
	int arr[]={2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;//2 3 4 5

	f(arr,n);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;//2 3 4 5
	
	return 0;
}