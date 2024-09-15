#include<iostream>
using namespace std;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void convertrevwords(int n){//0
	if(n==0){
		return;
	}

	int x=n%10;//2
	cout<<arr[x]<<" ";//eight four zero two
	convertrevwords(n/10);//204/10-->20/10 0
}
int main(){
	int n;//2048-->eight four zero two
	cin>>n;
	convertrevwords(n);


	return 0;
}