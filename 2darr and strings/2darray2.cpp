#include<iostream>
using namespace std;
int main(){
	int arr[100][100];
	int r,c;
	cin>>r>>c;//3 4


	for(int i=0;i<=r-1;i++){
	for(int j=0;j<=c-1;j++){
		cin>>arr[i][j];
	}
}

for(int i=0;i<=r-1;i++){
	for(int j=0;j<=c-1;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}


	return 0;
}