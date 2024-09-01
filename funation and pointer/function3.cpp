#include <iostream>
using namespace std;
// returntype functionname(){
// 	// kaam
// }

// void stat(){
// 	cout<<"hello"<<endl;
// 	cout<<"hii"<<endl;
// 	cout<<"coding"<<endl;
// }

void sumtwonum(){
	int a,b;
	cin>>a>>b;
	int sum=a+b;
	cout<<sum<<endl;


}
float divis();
// multip(dattype nameofvaribale,dattype nameofvaribale,){

// }
int subtr(int a,int b);//forward dec
void multip(int x,int y){
	// cout<<x*y<<endl;
	int m=x*y;
	cout<<m<<endl;
	divis();

}


float divis(){
	float a,b;
	cin>>a>>b;//5 2
	float d=a/b;
	cout<<d<<endl;
	return d;
}


int main(){
	int a,b;
		cin>>a>>b;
		cout<<subtr(a,b)<<endl;
	cout<<divis();
	sumtwonum();
	// int a,b;
	cin>>a>>b;
	// char ch;
	multip(a,b);


	// return 0;
}

int subtr(int a,int b){//4-7
	return a-b;
}