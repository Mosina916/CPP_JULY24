#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;
	

	int row=1;
	while(row<=tr){
	if(row%2==0){

		// even
		// startno-->0
		int stno=0;
		int i=1;
		while(i<=row){
			cout<<stno;
			stno=1-stno;//0
			i=i+1;
		}
	}
	else{
		// odd
		// startno->1
		int stno=1;
		int j=1;
		while(j<=row){
			cout<<stno;
			stno=1-stno;
			j=j+1;
		}
	}
	cout<<endl;
	row=row+1;

}

	return 0;
}