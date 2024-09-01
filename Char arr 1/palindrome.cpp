#include<iostream>
using namespace std;
int lengthofar(char arr[100]){
	int co=0;
	int i=0;
	while(arr[i]!='\0'){
		co++;
		i++;

	}
	return co;
}
bool palindrome(char arr[100]){
	int i=0;
	int j=lengthofar(arr)-1;

	while(i<j){
	if(arr[i]==arr[j]){
		i++;
		j--;
	}
	else{
		return false;
	}
}

return true;


}


int main(){

	char arr[100];
	// cout<<sizeof(arr)

	// int arr[]={3,2,1,31};
	cin.getline(arr,100);

	if(palindrome(arr)==true){

		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;
	}


	return 0;
}