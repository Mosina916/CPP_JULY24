#include<iostream>

#include<cmath>
using namespace std;
int main(){
	int no;
	int udp;
	
	cin>>no;//13
	cin>>udp;//3
	float step=1;
	

	float i=0;

	int x=0;
	while(x<=udp){

	while(i*i<=no){
		i=i+step;//3.606

	}
	i=i-step;//3.605
	step=step/10;//0.0001
	x=x+1;
}


cout<<i<<endl;

// cout<<i<<endl;



	return 0;
}