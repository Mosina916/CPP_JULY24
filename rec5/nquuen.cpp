#include<iostream>
#include<queue>
using namespace std;
int c=0;
int sol[100][100]={0};
bool kyamaiqrakhsaktihumn(int sol[100][100],int i,int j,int n){//2 2 

	// evertical check
	for(int l=0;l<i;l++){
		if(sol[l][j]==1){
			return false;
		}
	}


	// dia right
	int u=i-1;//1;
	int v=j+1;//3

	while(u>=0 and v<n){
	if(sol[u][v]==1){
		return false;
	}
	u--;
	v++;//-1 5
}

	// dia  left
	int q=i-1;//1
	int w=j-1;//1

	while(q>=0 and w>=0){
	if(sol[q][w]==1){
		return false;
	}
	q--;//-1
	w--;//-1
}

	return true;

}
bool nqueen(int n,int i){//0
	// ÷base case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int m=0;m<n;m++){
				cout<<sol[l][m]<<" ";
			}
			cout<<endl;
		}
		// return true;
		c++;
		cout<<endl;

		return false;

	}



	// rec case
	for(int j=0;j<n;j++){
		if(kyamaiqrakhsaktihumn(sol,i,j,n)==true){
		sol[i][j]=1;
		bool aggekaans=nqueen(n,i+1);//true
		if(aggekaans==true){
			return true;

		}
		sol[i][j]=0;//backtrack


	}

	}
	return false;
	




}

int main(){

	int n;
	cin>>n;//4
	nqueen(n,0);
	cout<<c<<endl;


	
	return 0;
}