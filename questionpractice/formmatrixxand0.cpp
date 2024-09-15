#include<iostream>
using namespace std;
// void spiralprint(int arr[5][5],int r,int c){

void formmatrix(char arr[100][100],int r,int c){
	int sr=0,er=r-1,sc=0,ec=c-1;
	char ch='X';

	while(sr<=er and sc<=ec){
		// forward
		for (int i = sc; i <=ec; i++)
		{
			arr[sr][i]=ch;
		}
		sr++;


		// downward
		for (int j = sr; j <=er; j++)
		{
			arr[j][ec]=ch;
		}
		ec--;


		// backward
				for (int k = ec; k>=sc;k--)
		{
			arr[er][k]=ch;
		}
		

	er--;

	
		// upward
		for (int l = er; l >=sr; l--)
		{
			arr[l][sc]=ch;
		}

		sc++;
		if(ch=='X'){
			ch='O';
		}
		else{
			ch='X';
		}
	}
}

int main(){
	int r,c;
	cin>>r>>c;

	char arr[100][100];
	formmatrix(arr,r,c);

	for (int i = 0; i <=r-1; ++i)
	{
		for(int j=0;j<=c-1;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}



	return 0;
}
