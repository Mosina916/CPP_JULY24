#include<iostream>
using namespace std;
int main(){
	
	int tr;
	cin>>tr;
	int rowno=1;
	while(rowno<=tr){

	// spaces
	int i=1;
	while(i<=tr-rowno){
		cout<<' '<<'\t';
		i=i+1;
	}



	// stars
	int stno=rowno;//3
	int j=1;
	while(j<=rowno){
		cout<<stno<<'\t';
		stno=stno+1;//6
		j=j+1;
	}




	// hash
	int stttno=stno-2;
	// int stttno=2*rowno-2;
	int k=1;
	while(k<=rowno-1){
		cout<<stttno<<'\t';
		stttno=stttno-1;
		k=k+1;
	}

	cout<<endl;
	rowno=rowno+1;
}





	return 0;
}