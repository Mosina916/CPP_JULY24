#include<iostream>
using namespace std;
int main(){
	// char arr[3][5]={{'A','F','T','R','\0'},{'D','A','t','U','\0'},{'o','q','t','b','\0'}};
		// char arr[3][5]={"AFTR","DATU","aqtb"};
	char arr[][5]={"AFTR","DATU","aqtb"};
	// cout<<arr<<endl;
	// cout<<&arr[0][0]<<endl;
	// cout<<&arr[1][0]<<endl;
	// cout<<&arr[2][0]<<endl;

	for (int i = 0; i <=2;i++)
	{
		for(int j=0;j<=3;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}

	return 0;
}