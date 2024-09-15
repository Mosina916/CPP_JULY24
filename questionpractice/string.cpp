#include<iostream>
using namespace std;
int main(){

	// string s="hello";
	string s2="elephant";
	// string s3=s+s2;
	// cout<<s3<<endl;

	// stringname.substr(index);
	// cout<<s2.substr(2)<<endl;


	// stringname.substr(index,countofchar);
		// cout<<s2.substr(2,4)<<endl;

	// int k=4;
	// codingblocks-->ockscodingbl

	string s;
	getline(cin,s);//codingblocks


	int k;
	cin>>k;//4
	int l=s.length();//12
// ocks
	string z=s.substr(0,l-k);//codingbl
	
	string y=s.substr(l-k);//
	cout<<y+z<<endl;


	


	return 0;
}
