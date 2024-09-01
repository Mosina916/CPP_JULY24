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
void appendtemparr(char arr[100],char temp[100]){
	int i=0;//0
	int j=lengthofar(arr);//4

	while(i<=lengthofar(temp)){
	arr[j]=temp[i];
	i++;
	j++;
}


cout<<arr<<endl;




}

int main(){
	char arr[100];
	cin.getline(arr,100);//"hell\0"
	char temp[100];
	cin.getline(temp,100);//"o code\0"
	appendtemparr(arr,temp);;//hello code\0

	return 0;
}