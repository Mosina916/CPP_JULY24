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
void copy(char arr[100],char temp[100]){
	int i=0;
	int j=0;
	while(i<=lengthofar(arr)){
	temp[j]=arr[i];
	i++;
	j++;
}


}

int main(){
	// int arr[]={3,4,5,3};
	// sizeof(arr)/sizeof(int)

	char arr[100];
	// sizeof(arr)
	cin.getline(arr,100);//"hel 8u\0"

	char temp[100];
	copy(arr,temp);
	cout<<temp<<endl;
	cout<<arr<<endl;
	

	// cout<<lengthofar(arr)<<endl;


	return 0;
}