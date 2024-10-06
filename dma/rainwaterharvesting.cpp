#include<iostream>
using namespace std;
int main(){
	int height[100]={3,1,2,5,1,0,0,2,7,6,4,5};
	int n=sizeof(height)/sizeof(int);
	int lsemax[100];
	int rsemax[100];


	lsemax[0]=height[0];

	for(int i=1;i<n;i++){

	lsemax[i]=max(lsemax[i-1],height[i]);
}

	rsemax[n-1]=height[n-1];

	for(int j=n-2;j>=0;j--){

	rsemax[j]=max(rsemax[j+1],height[j]);

}

int ans=0;

		for(int i=0;i<n;i++){
		ans=ans+min(lsemax[i],rsemax[i])-height[i];
	}


	cout<<ans<<endl;

	return 0;
}