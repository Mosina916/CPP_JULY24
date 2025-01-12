#include <iostream>
using namespace std;
bool amiabletoplaceccowswithmiddist(int *arr,int c,int n,int dist){
	int cp=1;
	int prev=arr[0];//1
	for(int j=1;j<n;j++){
	if(arr[j]-prev>=dist){
		cp++;//2
		prev=arr[j];
		if(cp==c){
			return true;
		}


	}
}
return cp>=c;

}
int main(){
// 	5 3
// 1 2 9 4 8

	int n,c;
	cin>>n>>c;
	int arr[100000];
	for (int i = 0; i <n; ++i)
	{
		 cin>>arr[i];//1 2 9 4 8
	}

	sort(arr,arr+n);

	int s=0;
	int e=arr[n-1]-arr[0];//9-1
	int ans;
	while(s<=e){
	int mid=(s+e)/2;//1
	if(amiabletoplaceccowswithmiddist(arr,c,n,mid)){
		ans=mid;//1
		s=mid+1;
	}
	else{
		e=mid-1;//3
	}
}


cout<<ans<<endl;





	return 0;
}