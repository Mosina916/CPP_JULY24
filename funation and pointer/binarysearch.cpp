#include<iostream>
using namespace std;
bool binarysearch(int arr[],int s,int e,int key){

	while(s<=e){
	int mid=(s+e)/2;//2

	if(arr[mid]==key){
		cout<<"key is present at "<<mid<<endl;
		return true;

	}
	else if(arr[mid]<key){
		s=mid+1;

	}
	else{
		e=mid-1;


	}

}

return false;



}
int main(){ 
	int arr[]={3,5,6,8,9,11,14};
	int n=sizeof(arr)/sizeof(int);//7
	int key;
	cin>>key;//7


	if(binarysearch(arr,0,n-1,key)==false){
		cout<<"key is not present"<<endl;
	}
	


	return 0;
}