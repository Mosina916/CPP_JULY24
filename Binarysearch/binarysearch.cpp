#include <iostream>
using namespace std;
bool bs(int *arr,int key,int s,int e){
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key){
			return true;
		}
		else if(arr[mid]<key){
			s=mid+1;

		}
		else{
			e=mid-1;

		}
	}

	return  false;



}
int main(){
	int arr[100];
	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}

	int key;
	cin>>key;
	if(bs(arr,key,0,n-1)==true){
		cout<<"yes key is present"<<endl;
	}
	else{
		cout<<" key is not present"<<endl;

	}



	return 0;
}