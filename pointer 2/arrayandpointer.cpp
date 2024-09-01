#include<iostream>
using namespace std;
int main(){

	int arr[]={2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);

	// cout<<arr<<endl;//name of arr --<>pehli bucket ki pehli byte ka address
	// cout<<arr+1<<endl;
	// cout<<arr+2<<endl;
	// cout<<arr+3<<endl;
	// cout<<arr+4<<endl;
	// cout<<&arr[0]<<endl;//2 ka address

	// cout<<&arr[1]<<endl;//2
	// cout<<&arr[2]<<endl;//2


	cout<<*arr<<endl;//name of arr --<>pehli bucket ki pehli byte ka address
	cout<<*(arr+1)<<endl;
	// cout<<arr+2<<endl;
	// cout<<arr+3<<endl;
	// cout<<arr+4<<endl;



	return 0;
}