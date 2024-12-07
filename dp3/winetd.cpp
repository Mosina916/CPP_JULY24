#include<iostream>
using namespace std;
// int maxprofit(int *price,int l,int r,int year){
// 	// base case
// 	if(l>r){
// 		return 0;
// 	}
// 	// re
// 	int op1=year*price[l]+maxprofit(price,l+1,r,year+1);
// 	int op2=year*price[r]+maxprofit(price,l,r-1,year+1);

// 	return max(op1,op2);
// }

int maxprofittd(int *price,int l,int r,int year,int arr[100][100]){
	// base case
	if(l>r){
		return arr[l][r]=0;
	}
	if(arr[l][r]!=-1){
		return arr[l][r];
	}
	// re
	int op1=year*price[l]+maxprofittd(price,l+1,r,year+1,arr);
	int op2=year*price[r]+maxprofittd(price,l,r-1,year+1,arr);

	return arr[l][r]=max(op1,op2);
}


int maxprofitbu(int*price,int n){
	int arr[100][100];//memset
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			arr[i][j]=0;
		}
	}

	// diagonal fill
	for(int k=0;k<n;k++){
		arr[k][k]=price[k]*n;

	}


	for(int l=n-2;l>=0;l--){//1
	for(int r=0;r<n;r++){//1
	if(l<r){
	int year=n-(r-l);//3
	int op1=year*price[l]+arr[l+1][r];//3*5+24
	int op2=year*price[r]+arr[l][r-1];//3*4+29
	arr[l][r]=max(op1,op2);
}

}

}


for(int k=0;k<=n-1;k++){
	for(int q=0;q<=n-1;q++){
		cout<<arr[k][q]<<'\t';

	}
	cout<<endl;
}

return arr[0][n-1];








}
int main(){
	int price[]={2,3,5,1,4};
	int n=sizeof(price)/sizeof(int);
	// cout<<maxprofit(price,0,n-1,1);
	// cout<<maxprofitbu(price,n);


	int arr[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			arr[i][j]=-1;
		}
	}

	cout<<maxprofittd(price,0,n-1,1,arr)<<endl;


	for(int l=0;l<=n-1;l++){
		for(int k=0;k<=n-1;k++){
			cout<<arr[l][k]<<" ";

		}
		cout<<endl;
	}

	
	return 0;
}



