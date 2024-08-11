#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;//7


	int no;
	cin>>no;//3
	int abhtakkaxor=no;//3


	int i=1;
	while(i<=n-1){
		cin>>no;//5
	abhtakkaxor=abhtakkaxor^no;//7
	i=i+1;

	}

	cout<<abhtakkaxor<<endl;
	
	


	return 0;
}