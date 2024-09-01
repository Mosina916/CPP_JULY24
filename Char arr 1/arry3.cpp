#include<iostream>
using namespace std;
// int lengthofar(char arr[100]){
// 	int co=0;
// 	int i=0;
// 	while(arr[i]!='\0'){
// 		co++;
// 		i++;

// 	}
// 	return co;
// }
// bool palindrome(char arr[100]){
// 	int i=0;
// 	int j=lengthofar(arr)-1;

// 	while(i<j){
// 	if(arr[i]==arr[j]){
// 		i++;
// 		j--;
// 	}
// 	else{
// 		return false;
// 	}
// }

// return true;


// }

// #define k 10
//default parameters

// void f1(int a,int b){
// 	cout<<a+b;
// }

// void f2(int a,int b,int c){
// 	cout<<a+b+c;
// }


// void f3(int a,int b,int c,int d){
// 	cout<<a+b+c;
// }
void f(int a=0,int b=0,int c=0,int d=0,int e=0,int f=0){
	cout<<a+b+c+d+e+f<<endl;
}

int main(){
	// f1(2,3);

	// f2(2,3,5);

	// f3(2,3,5,6);
	f(2,3);
	f(2,3,5);
	f(2,3,5,6);


	


	return 0;
}