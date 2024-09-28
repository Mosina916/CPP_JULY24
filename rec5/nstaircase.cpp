#include<iostream>
#include<cmath>
using namespace std;
// int nstaircase(int n){
// 	if(n==2){
// 		return 2;
// 	}
// 	if(n==1){
// 		return 1;
// 	}
// 	if(n==0){
// 		return 1;
// 	}


// 	return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);
// }


// int nstaircase(int n,int k){
// 	if(n==3){
// 		return 4;
// 	}
// 	if(n==2){
// 		return 2;
// 	}
// 	if(n==1){
// 		return 1;
// 	}
// 	if(n==0){
// 		return 1;
// 	}
// 	int ans=0;
// 	for(int l=1;l<=k;l++){
// 		ans+=nstaircase(n-l);
// 	}


// 	return ans;
// }



int nstaircase(int n,int k){
	
	if(n<0){
		return 0;
	}

	if(n==0){
		return 1;
	}
	int ans=0;
	for(int l=1;l<=k;l++){
		ans+=nstaircase(n-l,k);
	}


	return ans;
}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<nstaircase(n,k)<<endl;
	


	
	return 0;
}