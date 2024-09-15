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

void rotate(char *arr,int k){
	int i=lengthofar(arr);//12
	int m=i;//12
	


	while(i>=0){
	arr[i+k]=arr[i];
	i--;
}
//15--l
int p=m;//12
int u=0;

	for(int i=1;i<=k;i++){
	arr[u]=arr[p];
	p++;
	u++;
}

arr[m]='\0';
// cout<<arr<<endl;




}
int main(){
	char arr[100];
	cin.getline(arr,100);//codingblocks\0   cat
	int k;
	cin>>k;//3--> O/P ckscodingblo  5

	k=k%lengthofar(arr);//2


	rotate(arr,k);
	cout<<arr<<endl;


	


	
	return 0;
}