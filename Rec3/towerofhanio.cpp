#include<iostream>
using namespace std;
void toh(int n,char src,char helr,char dest){
	// base case
	if(n==0){
		return;
	}
	// rec case
	toh(n-1,src,dest,helr);
	cout<<"move disk no "<<n<<" from "<<src<<" to "<<dest<<endl;
	toh(n-1,helr,src,dest);
	

}
int main(){
	int n;
	cin>>n;
	toh(n,'A','B','C');
	

	return 0;
}