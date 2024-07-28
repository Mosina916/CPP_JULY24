#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;


// paRT1 ROW 1
	int i=1;
	while(i<=tr){
		cout<<'*'<<'\t';
		i=i+1;
	}

	cout<<endl;



	// PART2 ROW 2 TO 5
	int rowno=1;
	while(rowno<=(tr-1)/2){
	// stars

	int j=1;
	while(j<=(tr+1)/2-rowno){
		cout<<'*'<<'\t';
		j=j+1;
	}

	// spaces
	int k=1;
	while(k<=2*rowno-1){
		cout<<' '<<'\t';
		k=k+1;
	}


	// stars
	int l=1;
	while(l<=(tr+1)/2-rowno){
		cout<<'*'<<'\t';
		l=l+1;
	}

	cout<<endl;
	rowno=rowno+1;
}
// rowno=5







	// PART3 ROW 6 TO 8
rowno=1;
while(rowno<=(tr-3)/2){

	// stars

	int p=1;
	while(p<=rowno+1){
		cout<<'*'<<'\t';
		p=p+1;
	}


	// space

	int q=1;
	while(q<=tr-2-2*rowno){
		cout<<' '<<'\t';
		q=q+1;
	}

	// star

	int r=1;
	while(r<=rowno+1){
		cout<<'*'<<'\t';
		r=r+1;
	}
	cout<<endl;
	rowno=rowno+1;
}




	// PART 4. ROW 9
	int f=1;
	while(f<=tr){
		cout<<'*'<<'\t';
		f=f+1;
	}

	cout<<endl;





	return 0;
}