#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;////5
	int arr[100000];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];

	}

	int temp[10000];

	int tq;
	cin>>tq;//2

	for(int p=1;p<=tq;p++){
	int cq;
	cin>>cq;//0

	// 1 2 3 4 5
		// 4 6 8 5 7
		int k=0;
		for(int j=0;j<n;j++){
		int indx=(n+j-cq)%n;//
		temp[k]=arr[j]+arr[indx];//4
		k++;
	}
	for (int l = 0; l <n;l++)
	{
		arr[l]=temp[l];
	}

}

int sum=0;
for(int r=0;r<n;r++){
	sum=(sum%1000000007+arr[r]%1000000007)%1000000007;

}
cout<<sum%1000000007<<endl;


	


	return 0;
}