#include<iostream>
using namespace std;
int nstaircase(int n,int k,int *arr){
	if(n==0){
		return arr[n]=1;

	}
	if(n<0){
		return 0;
	}
	if(arr[n]!=-1){
		return arr[n];
	}
	// return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);
	int ans=0;
	for(int i=1;i<=k;i++){
	ans=ans+nstaircase(n-i,k,arr);
   } 

   return arr[n]=ans;
}
int main(){

	int n,k;
	cin>>n>>k;
	// cout<<nstaircase(n,k)<<endl;

	int *arr=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}

	cout<<nstaircase(n,k,arr)<<endl;


	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;
	
	return 0;
}



