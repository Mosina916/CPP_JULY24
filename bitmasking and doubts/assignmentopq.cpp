#include <iostream>
using namespace std;
int main(){
	int a=10;
	int b=0;
	int c=-1;
	int d=1;

	if (a++ and b-- and ++c)
	{
		cout<<"hello"<<endl;
	}
	else if(++c and a-- and ++b){
		cout<<"hii "<<endl;
	}
	else if(--d and b++){
		cout<<"coding "<<endl;
	}
	else{
		cout<<" blocks"<<endl;
	}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;



	return 0;
}