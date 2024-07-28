#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;//5

	// for any row of upper part 1 to 4
	int rowno=1;
	while(rowno<=(tr+1)/2){

	// spaces
	int i=1;
	while(i<=(tr+1)/2-rowno){
		cout<<' '<<'\t';
		i=i+1;
	}


	// stars
	int s=1;
	while(s<=2*rowno-1){
		cout<<'*'<<'\t';
		s=s+1;
	}

	cout<<endl;
	rowno=rowno+1;
}


rowno=1;
while(rowno<=(tr-1)/2){

// any row from below half 
	// spaces
	int j=1;
	while(j<=rowno){
		cout<<' '<<'\t';
		j=j+1;
	}


	// stars
	int k=1;
	while(k<=tr-2*rowno){
		cout<<'*'<<'\t';
		k=k+1;
	}

	cout<<endl;
	rowno=rowno+1;
}






	return 0;
}