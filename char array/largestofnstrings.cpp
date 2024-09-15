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
	int n;
	cin>>n;//4
	cin.ignore();

	char arr[100];
	cin.getline(arr,100);//"board";

	char abhtakkilaarr[100];
	copy(arr,abhtakkilaarr);//abhtakkilaarr-->elephant

	int abtkilenmax=lengthofar(arr);//5


	for(int i=1;i<=n-1;i++){
	cin.getline(arr,100);//duster
	if(lengthofar(arr)>abtkilenmax){
		copy(arr,abhtakkilaarr);
		abtkilenmax=lengthofar(arr);//8
	}

}

cout<<abtkilenmax<<endl;

cout<<abhtakkilaarr<<endl;




	
	return 0;
}