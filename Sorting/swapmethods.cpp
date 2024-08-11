#include<iostream>
using namespace std;
int main(){

	// int arr[]={5,4,3,2,1};
	int arr[]={5,4,1,2,3};
	int n=sizeof(arr)/sizeof(int);

	for(int step=1; step<=n-1;step++){//3
		// 1 2 3 4 5
		bool kyaswaphuva=false;
	for (int j = 0; j <=n-step-1;j++)//4
	{
		if(arr[j]>arr[j+1]){//5>4
			// swap(arr[j],arr[j+1]);//inbuild


			// extra variable c

			// int c=arr[j];
			// arr[j]=arr[j+1];
			// arr[j+1]=c;

			// without extra variable
			// arr[j]=arr[j]+arr[j+1];
			// arr[j+1]=arr[j]-arr[j+1];
			// arr[j]=arr[j]-arr[j+1];


			// swapping in aline 
			arr[j+1]=(arr[j]+arr[j+1])-(arr[j]=arr[j+1]);

			kyaswaphuva=true;
		}
		// 1 2 3 4 5
	}
	// 1,2,3,4,5 
	if(kyaswaphuva==false){
		break;
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