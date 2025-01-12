#include<iostream>
#include<cmath>
using namespace std;
int digits(int x){
	int c=0;

	while(x!=0){
		c++;
		x=x/10;
	}
	return c;
}
int main(){

	int t;
	cin>>t;//2
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		int arr[101];
		for (int i = 0; i <n; ++i)
		{
			cin>>arr[i];
		}

		for(int it=1;it<=n-1;it++){
			for(int j=0;j<=n-it-1;j++){
				long long int no1=arr[j]*pow(10,digits(arr[j+1]))+arr[j+1];
				long long int no2=arr[j+1]*pow(10,digits(arr[j]))+arr[j];
				if(no1>no2){
					swap(arr[j],arr[j+1]);
				}


			}
		}



		for (int l = n-1;l>=0; l--)
		{
			cout<<arr[l];
		}
		cout<<endl;



	}
	


	return 0;
}