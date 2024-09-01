#include<iostream>
using namespace std;
int lengthofar(char arr[100]){
	int co=0;


	int i=0;
	while(arr[i]!='\0'){
		co++;
		i++;

	}

	// cout<<co<<endl;

	return co;

}


int main(){

	char arr[100];
	cin.getline(arr,100);

	cout<<lengthofar(arr)<<endl;


	return 0;
}