#include<iostream>
using namespace std;
int mincoins(int *coins,int amount,int n){
	// base case
	if(amount==0){
		return 0;
	}

	// recase
	int ans=INT_MAX;
	for(int i=0;i<n;i++){//3
	int bachamt=amount-coins[i];//13-1-->12
	if(bachamt>=0){
		int rans=mincoins(coins,bachamt,n);//7
		if(rans<ans){
			ans=rans+1;//3
		}


	}
}
return ans;

}
// tb
int mincoinstd(int *coins,int amount,int n,int *arr){
	// base case
	if(amount==0){
		return arr[amount]=0;
	}
	if(arr[amount]!=INT_MAX){
		return arr[amount];

	}

	// recase
	int ans=INT_MAX;
	for(int i=0;i<n;i++){//3
	int bachamt=amount-coins[i];//13-1-->12
	if(bachamt>=0){
		int rans=mincoinstd(coins,bachamt,n,arr);//7
		if(rans<ans){
			ans=rans+1;//3
		}
	}
}
return arr[amount]=ans;

}

// 0 1 2 3 4 1 1 2 3 1 2 2 2 3

// bu
int mincoinsbu(int *coins,int amount,int n){
	int *arr=new int[amount+1];

	for(int i=0;i<=amount;i++){
		arr[i]=INT_MAX;
	}

	arr[0]=0;



	for(int i=1;i<=amount;i++){


	for(int j=0;j<n;j++){//j
	int bachamt=i-coins[j];//1
	if(bachamt>=0){
		arr[i]=min(arr[bachamt]+1,arr[i]);

	}
}
}
// 
return arr[amount];	

}
int main(){
	int coins[]={9, 6, 5, 1};
	int n=sizeof(coins)/sizeof(int);
	int amount;
	cin>>amount;//13

	cout<<mincoinsbu(coins,amount,n)<<endl;


	int *arr=new int[amount+1];
	for (int i = 0; i <=amount; ++i)
	{
		arr[i]=INT_MAX;
	}

	cout<<mincoinstd(coins,amount,n,arr)<<endl;

	cout<<mincoins(coins,amount,n)<<endl;
	
	// for(int l=0;l<=amount;l++){
	// 	cout<<arr[l]<<" ";
	// }
	// cout<<endl;


	
	return 0;
}



