#include<iostream>
using namespace std;
int main(){ 
	int arr[]={0,9,9,2,3,4,2,5,10,3,6,0,0,9,3,5,2,1};
	int n=sizeof(arr)/sizeof(int);


	int freq[11]={};


	for(int i=0;i<n;i++){
		freq[arr[i]]++;

	}

	// for (int i = 0; i <=10; ++i)
	// {
	// 	cout<<freq[i]<<" ";
	// }
	

	for(int i=0;i<=10;i++){//1
	while(freq[i]--){
		cout<<i<<" ";//0 0 0 1 2 2 2
	}
}


	// for (int i = 0; i <n; ++i)
	// {
	// 	cout<<arr[i]<<" ";//1 2 3 4 5
	// }

	// cout<<endl;


	return 0;
}