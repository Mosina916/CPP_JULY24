#include<iostream>
using namespace std;
int main(){ 
	int arr[]={3,2,3,21,1};
	int n=sizeof(arr)/sizeof(int);

	for(int index=1;index<=n-1;index++){
		int ele=arr[index];
		for(int j=index-1;j>=0;j--){
			if(ele<arr[j]){
				swap(ele,arr[j]);

			}
			else{
				break;
			}
		}
	}




	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";//1 2 3 4 5
	}

	cout<<endl;


	return 0;
}