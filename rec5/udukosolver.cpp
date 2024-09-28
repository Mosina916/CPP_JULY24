#include<iostream>
#include<cmath>
using namespace std;

bool kyamainumrakhsaktihunijpe(int mat[9][9],int i,int j,int num,int n){
	// vertical check

	for(int l=0;l<n;l++){
		if(mat[l][j]==num){
			return false;
		}
	}


	// horizontal check

	for(int l=0;l<n;l++){
		if(mat[i][l]==num){
			return false;
		}
	}


	// root n* root*n
	int p=sqrt(n);//3;
	int si=(i/p)*p;//3
	int sj=(j/p)*p;//3

	for(int k=si;k<=si+p-1;k++){//4
	for(int o=sj;o<=sj+p-1;o++){//3
	if(mat[k][o]==num){
		return false;
	}
}
}

return true;


}

bool sudukosolver(int mat[9][9],int n,int i,int j){
	// base case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int m=0;m<n;m++){
				cout<<mat[l][m]<<" ";
			}
			cout<<endl;
		}
		return false;
		// return true;
	}


	// rec case
	if(j==n){
		return sudukosolver(mat,n,i+1,0);
	}
	if(mat[i][j]!=0){
		// filled
		return sudukosolver(mat,n,i,j+1);

	}
	else{
		// unfilled
		for(int num=1;num<=n;num++){//4
		if(kyamainumrakhsaktihunijpe(mat,i,j,num,n)==true){
			mat[i][j]=num;//3
			bool bakikarakhpaaraha=sudukosolver(mat,n,i,j+1);//false
			if(bakikarakhpaaraha==true){
				return true;
			}
			mat[i][j]=0;

		}

	}
	return false;


	}
}


int main(){
	//9
	int mat[9][9] =
		{{0,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

		int n=9;

	sudukosolver(mat,n,0,0);

	


	
	return 0;
}