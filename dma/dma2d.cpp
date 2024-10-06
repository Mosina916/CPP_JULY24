#include<iostream>
using namespace std;
int main(){
	// sma
	// int arr[4][5]


	int **arr=new int*[4];
	for (int i = 0; i <=3; ++i)
	{
		arr[i]=new int[5];
	}


	for (int i = 0; i <=3; ++i)
	{
		for(int j=0;j<=4;j++){
			cin>>arr[i][j];
		}
	}


	for (int i = 0; i <=3; ++i)
	{
		for(int j=0;j<=4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i=0;i<=3;i++){
	delete[] arr[i];
	arr[i]=NULL;
}



	// syntax
	// delete[] pointername;
	delete[] arr;
	arr=NULL;




	

	return 0;
}