#include<iostream>
using namespace std;
// int mincostpath(int cost[5][4],int x,int y){
// 	if(x==0 and y==0){
// 		return cost[x][y];
// 	}
// 	if(x<0 ||y<0){
// 		return INT_MAX;
// 	}


// 	int op1=mincostpath(cost,x-1,y);
// 	int op2=mincostpath(cost,x,y-1);


// 	return min(op1,op2)+cost[x][y];

// }
// int mincostpathtd(int cost[5][4],int x,int y,int sol[100][100] ){
// 	if(x==0 and y==0){
// 		return sol[x][y]=cost[x][y];
// 	}
// 	if(x<0 ||y<0){
// 		return INT_MAX;
// 	}

// 	if(sol[x][y]!=-1){
// 		return sol[x][y];
// 	}


// 	int op1=mincostpathtd(cost,x-1,y,sol);
// 	int op2=mincostpathtd(cost,x,y-1,sol);


// 	return sol[x][y]=min(op1,op2)+cost[x][y];

// }


int bu(int cost[5][4],int x,int y){


	int sol[100][100];
	for(int i=0;i<=x;i++){//0 1
		for(int j=0;j<=y;j++){
			if(i==0 and j==0){
		sol[i][j]=cost[i][j];
		}
		else if(i==0){
			sol[i][j]=sol[i][j-1]+cost[i][j];

		}

		else if(j==0){
			sol[i][j]=sol[i-1][j]+cost[i][j];

		}
		else{
			sol[i][j]=min(sol[i-1][j],sol[i][j-1])+cost[i][j];
		}


	}

	}


	return sol[x][y];

}
int main(){
	int cost[5][4]={
		{2,1,3,1},
		{3,4,1,2},
		{4,3,1,4},
		{5,1,3,2},
		{5,1,2,1}
	};

	int x,y;
	cin>>x>>y;

// 
	// cout<<mincostpath(cost,x,y)<<endl;

	// int sol[100][100];
	// for(int i=0;i<100;i++){
	// 	for(int j=0;j<100;j++){
	// 		sol[i][j]=-1;
	// 	}
	// }

	cout<<bu(cost,x,y)<<endl;

	// cout<<mincostpathtd(cost,x,y,sol)<<endl;


	// for(int l=0;l<=x;l++){
	// 	for(int k=0;k<=y;k++){
	// 		cout<<sol[l][k]<<" ";

	// 	}
	// 	cout<<endl;
	// }
	
	return 0;
}



