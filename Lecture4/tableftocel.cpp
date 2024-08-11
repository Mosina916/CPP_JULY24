#include<iostream>
using namespace std;
int main(){
	int iti,fin,step;
	cin>>iti>>fin>>step;//0 300 20

	int f=iti;//i
	while(f<=fin){
		int c=5.0/9*(f-32);
		cout<<f<<'\t'<<c<<endl;
		f=f+step;
	}


	return 0;
}