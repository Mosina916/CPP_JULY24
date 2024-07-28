#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;

	int rowno=1;
	while(rowno<=tr){
// for any row of pattern
	// spaces

	int i=1;
	while(i<=tr-rowno){
		cout<<' '<<'\t';
		i=i+1;
	}

	// stars
	int stno=1;
	int j=1;
	while(j<=2*rowno-1){
		cout<<stno<<'\t';
		stno=stno+1;
		j=j+1;
	}

	cout<<endl;
	rowno=rowno+1;
}




	return 0;
}