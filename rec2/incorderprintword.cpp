#include<iostream>
using namespace std;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void convertrevwords(int n){//2048
	if(n==0){
		return;
	}

	convertrevwords(n/10);//204
	int x=n%10;//8
	cout<<arr[x]<<" ";//eight
	
}
int main(){
	int n;//2048-->two zero four eight
	cin>>n;

	convertrevwords(n);
	


	return 0;
}