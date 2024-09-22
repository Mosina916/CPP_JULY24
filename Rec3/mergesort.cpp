#include<iostream>
using namespace std;
void mergetwosortedarr(int *arr,int s,int e){
	int mid=(s+e)/2;
	int temp[1000];
	int i=s;
	int j=mid+1;
	int k=s;

	while(i<=mid and j<=e){
	if(arr[i]<arr[j]){
		temp[k]=arr[i];
		i++;
		k++;

	}
	else{
		temp[k]=arr[j];
		k++;
		j++;
	}
}
	while(j<=e){
	temp[k]=arr[j];
	k++;
	j++;
}

	while(i<=mid){
	temp[k]=arr[i];
	k++;
	i++;

}

	// copy temp actual arr
	for(int l=s;l<=e;l++){
	arr[l]=temp[l];
}




}
void mergesort(int *arr,int s,int e){
	// base case
	if(s==e){
		return;
	}
	// rec case
	int mid=(s+e)/2;
	mergesort(arr,s,mid);//4 5 1-->1 4 5
	mergesort(arr,mid+1,e);//6 3-->3,6
	mergetwosortedarr(arr,s,e);

}
int main(){
	int arr[]={4,5,1,6,3};
	int n=sizeof(arr)/sizeof(int);
	mergesort(arr,0,n-1);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";

	}
	cout<<endl;

	return 0;
}