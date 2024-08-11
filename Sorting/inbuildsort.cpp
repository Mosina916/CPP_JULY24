#include<iostream>
using namespace std;
int main(){ 
	int arr[]={3,2,3,21,1,3,2,3,2,3,2,3};
	int n=sizeof(arr)/sizeof(int);


	// sort(arrayname,arrayname+noofele);

	sort(arr,arr+n);



	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";//1 2 3 4 5
	}

	cout<<endl;


	return 0;
}