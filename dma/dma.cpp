#include<iostream>
using namespace std;
int main(){
	// sma
	// int a;
	// a=10;

	// dma
	// int *ptr=new int;
	// *ptr=10;
	// cout<<*ptr<<endl;

	// delete ptr;
	// ptr=NULL;




	// int arr[5];

	int*ptr=new int[5];
	for(int i=0;i<=4;i++){
		cin>>ptr[i];
	}

	for(int i=0;i<=4;i++){
		cout<<ptr[i]<<" ";
	}


	delete[] ptr;
	pt=NULL;


	// cout<<endl;



	

	return 0;
}