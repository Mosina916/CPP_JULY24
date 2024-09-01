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
	// 3 5 4 7 8 4
	// 8 2 3 1 0 7
	// 3 6 7 9 1 4
	// 2 4 5 7 8 0
	// 5 8 7 9 1 2

	// 5*6


	for (int j = 0; j <=c-1; j++)
	{
		if(j%2==0){
			for (int i = 0; i <=r-1; i++)
			{
				cout<<arr[i][j]<<" ";
			}

		}
		else{
			for (int i = r-1;i>=0; i--)
			{
				cout<<arr[i][j]<<" ";
			}

		}
	}


	


	return 0;
}