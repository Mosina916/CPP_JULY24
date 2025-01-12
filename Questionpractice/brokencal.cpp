#include<iostream>
using namespace std;
void multi(int arr[200],int no,int &nodti){
	int carry=0;
	int j;
	for(j=0;j<nodti;j++){
	int prod=arr[j]*no+carry;//20
	arr[j]=prod%10;
	carry=prod/10;//1
}


	while(carry!=0){
	arr[j]=carry%10;
	j++;
	carry=carry/10;
	nodti++;//34
}

}
void fact(int n){
	int arr[1000];
	arr[0]=1;
	int nodti=1;
	for(int no=1;no<=n;no++){
	multi(arr,no,nodti);
}
	for(int k=nodti-1;k>=0;k--){
		cout<<arr[k];
	}
	cout<<endl;


}
int main(){
	int n;
	cin>>n;//5
	fact(n);




	return 0;
}