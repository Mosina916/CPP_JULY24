#include<iostream>
#include<cmath>
using namespace  std;
int main(){
	int fans=0;
	int n;
	cin>>n;//32145

	int place=1;

	while(n>0){
	int ld=n%10;//3

	fans=fans+place*pow(10,ld-1);//10000+2000+3+40+500
	n=n/10;//0
	place++;//6
}

cout<<fans<<endl;


	

	return 0;
}