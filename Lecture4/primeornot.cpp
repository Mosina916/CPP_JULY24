#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//7

	int i=2;//intil
	while(i<=no-1){
		if(no%i==0){//7%6==0

			cout<<"no is not prime"<<endl;
			// return 0;
			break;
		}
		i=i+1;//7
	}
	if(i==no){
		cout<<"prime"<<endl;
	}


	// cout<<"no is prime"<<endl;

	return 0;
}