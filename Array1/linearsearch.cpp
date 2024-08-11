#include<iostream>
using namespace  std;
int main(){
	int arr[]={3,2,4,1,4,5};

	int no;
	cin>>no;//14
	int j;
	int tb=sizeof(arr)/sizeof(int);
	for(j=0;j<=tb-1;j++){
			if(arr[j]==no){
		cout<<"yes "<<no<<" is present at index "<<j<<endl;
		break;

	}

	}
	if(j==tb){
		cout<<"key is not presnt"<<endl;
	}






	// reverse print
	for (int i = n-1; i >=0; i--)
	{
		cout<<arr[i]<<" ";
	}

	


	return 0;
}