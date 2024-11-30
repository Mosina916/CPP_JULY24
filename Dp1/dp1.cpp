#include<iostream>
using namespace std;
// o(2^n)
int fibo(int n){
	// base case
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	// rec case 
	return fibo(n-1)+fibo(n-2);
}
// o(n)
int bu(int n){
	int *arr=new int[n+1];
	arr[0]=0;
	arr[1]=1;
	for (int i = 2; i <=n; ++i)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	// 0 1 1 2 3 5
	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return arr[n];
}



int fibotd(int n,int *arr){
	// base case
	if(n==0||n==1){
		return arr[n]=n;
	}
	if(arr[n]!=-1){
		return arr[n];
	}
	// rec case

	return arr[n]=fibotd(n-1,arr)+fibotd(n-2,arr);
}
int main(){
	int n;
	cin>>n;//5
	cout<<bu(n)<<endl;
	

	int *arr=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}
	cout<<fibotd(n,arr)<<endl;
	

	cout<<fibo(n)<<endl;
	
	return 0;
}