#include<iostream>
#include<climits>
using namespace std;
void f(int*b,int n){
	for (int i = 0; i <n; ++i)
	{
		b[i]=b[i]+10;
	}

	for (int i = 0; i <n; ++i)
	{
		cout<<b[i]<<" ";
	}///12,13,14,15,16

	cout<<endl;

}
int main(){

	// int *ptr=arr;
	
	int arr[]={2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	int *ptr=arr;//valid

	// int x=10;
	// int *arr[]=&x;//invalid

	// for (int i = 0; i <n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;//2,3,4,5,6
	// f(arr,n);

	// for (int i = 0; i <n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;//12,13,14,15,16


	return 0;
}