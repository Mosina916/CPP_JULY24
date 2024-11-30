#include<iostream>
using namespace std;
int fr(int n){//10
	// base case 
	if(n==1){
		return 0;
	}


	// rec case
	int x=INT_MAX;
	int y=INT_MAX;
	int z=INT_MAX;
	x=fr(n-1);
	if(n%2==0){
		y=fr(n/2);
	}
	if(n%3==0){
		y=fr(n/3);
	}

	return min(x,min(y,z))+1;

}


int f(int n,int *arr){//10
	// base case 
	if(n==1){
		return arr[n]=0;
	}
	if(arr[n]!=-1){
		return arr[n];
	}
	// rec case
	int x=INT_MAX;
	int y=INT_MAX;
	int z=INT_MAX;
	x=f(n-1,arr);
	if(n%2==0){
		y=f(n/2,arr);
	}
	if(n%3==0){
		y=f(n/3,arr);
	}

	return arr[n]=min(x,min(y,z))+1;

}


int minbu(int n){//12
	int *arr=new int[n+1];//13
	arr[1]=0;

	for(int i=2;i<=n;i++){
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;

	x=arr[i-1];//1
	if(i%2==0){
		y=arr[i/2];//inT_MAX
	}
	if(i%3==0){
		z=arr[i/3];//0
	}
	arr[i]=min(x,min(y,z))+1;
}

for (int i = 0; i <=n; ++i)
{
	cout<<arr[i]<<" ";
}

cout<<endl;

return arr[n];




}

// -1 0 1 1 2 3 2 3 3 2 3 4 3
int main(){
	int n;
	cin>>n;//10 to1 

	cout<<minbu(n)<<endl;

	
	// int *arr=new int[n+1];
	// for (int i = 0; i <=n; ++i)
	// {
	// 	arr[i]=-1;
	// }

	// cout<<f(n,arr)<<endl;


	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;


	// cout<<fr(n)<<endl;
	
	return 0;
}