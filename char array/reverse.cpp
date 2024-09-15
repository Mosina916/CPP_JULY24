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

void reversearr(char *arr){
	char temp[100];
	int i=lengthofar(arr)-1;
	int j=0;
	while(i>=0){
	temp[j]=arr[i];
	i--;
	j++;
	}
	temp[j]='\0';

	cout<<temp<<endl;

}

void reversearr2(char*arr){
	int i=0;
	int j=lengthofar(arr)-1;
	while(i<j){
	swap(arr[i],arr[j]);
	i++;
	j--;
}

}

int main(){
	char arr[100];

	cin.getline(arr,100);//"hel 8uot\0"
	reversearr2(arr);

	cout<<arr<<endl;


	return 0;
}