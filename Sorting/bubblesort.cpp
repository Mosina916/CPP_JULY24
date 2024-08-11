#include<iostream>
using namespace std;
int main(){

	// int arr[]={5,4,3,2,1};

	// int arr[]={5,4,3,2,1,0,4,2,2,3,2,5,2,6};
	int n=sizeof(arr)/sizeof(int);

	for(int step=1; step<=n-1;step++){
	for (int j = 0; j <=n-step-1;j++)
	{
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
	// 1 2 3 4 5
}
//1 2 3 4 5

for (int i = 0; i <n; ++i)
{
	cout<<arr[i]<<" ";//1 2 3 4 5
}

cout<<endl;


	return 0;
}