#include<iostream>
using namespace std;
int sol[100][100]={0};
bool f(char mat[5][5],int i,int j,int tr,int tc){
	if(i==tr-1 and j==tc-1){
		sol[i][j]=1;
		for (int l = 0; l <tr;l++)
		{
			for(int k=0;k<tc;k++){
				cout<<sol[l][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		// return true;
		return false;
	}

	// base  case
	sol[i][j]=1;
	// forward
	if(j<=tc-2 and mat[i][j+1]!='B'){
		bool kyapathmila=f(mat,i,j+1,tr,tc);
		if(kyapathmila==true){
			return true;
		}
	}
	// donward
	if(i<=tr-2 and mat[i+1][j]!='B'){
		bool kyapathmila=f(mat,i+1,j,tr,tc);
		if(kyapathmila==true){
			return true;
		}
	}

	sol[i][j]=0;
	return false;

}

int main(){
	char mat[5][5]={
		"UUBU",
		"UUBU",
		"BUBU",
		"BUUB",
		"BUUU"
	};
	int tr=5;
	int tc=4;

	f(mat,0,0,tr,tc);




	
	return 0;
}