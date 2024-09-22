#include<iostream>
using namespace std;
void mergetwosortedarr(int *arr1,int *arr2,int n,int m){
	int i=n-1;
	int j=m-1;
	int k=n+m-1;

	while(i>=0 and j>=0){
	if(arr1[i]>arr2[j]){
		arr1[k]=arr1[i];
		i--;
		k--;
	}
	else{
		arr1[k]=arr2[j];
		j--;
		k--;

	}
}
	//
	while(j>=0){
		arr1[k]=arr2[j];
	j--;
	k--;

	}
	


}
int main(){
	int arr1[100]={3,5,6,8,9};//sorted
	int arr2[100]={1,2,4,7};//sortted
	int n=5;//7
	int m=4;
	mergetwosortedarr(arr1,arr2,n,m);

	for (int i = 0; i <=m+n-1; ++i)
	{
		cout<<arr1[i]<<" ";
	}
	

	return 0;
}