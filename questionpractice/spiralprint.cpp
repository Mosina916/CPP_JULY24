#include<iostream>
using namespace std;
// void spiralprint(int arr[5][5],int r,int c){

void spiralprint(int arr[7][3],int r,int c){
	int sr=0,er=r-1,sc=0,ec=c-1;

	while(sr<=er and sc<=ec){
		// forward
		for (int i = sc; i <=ec; i++)
		{
			cout<<arr[sr][i]<<" ";
		}
		sr++;


		// downward
		for (int j = sr; j <=er; j++)
		{
			cout<<arr[j][ec]<<" ";
		}
		ec--;


		// backward
		if(sr<=er){
		for (int k = ec; k>=sc;k--)
		{
			cout<<arr[er][k]<<" ";
		}
		
	}
	er--;

	if(sc<=ec){

		// upward
		for (int l = er; l >=sr; l--)
		{
			cout<<arr[l][sc]<<" ";
		}
	}
		sc++;
	}
}

int main(){
	// int arr[5][5]={
	// 	{3,5,7,9,4},
	// 	{2,7,3,19,5},
	// 	{1,0,3,6,9},
	// 	{12,13,1,4,2},
	// 	{6,4,9,13,20}
	// };


	// int r=5;
	// int c=5;
	// spiralprint(arr,r,c);


	int arr[7][3]={
		{30,50,70},
		{13,55,37},
		{32,25,37},
		{34,85,27},
		{31,53,7},
		{3,52,77},
		{32,55,75}


	};

	int r=7;
	int c=3;
	spiralprint(arr,r,c);



	return 0;
}
