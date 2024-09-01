#include<iostream>
using namespace std;
int main(){
	int arr[100][100];
	int r,c;
	cin>>r>>c;//3 4


	for(int i=0;i<=r-1;i++){
	for(int j=0;j<=c-1;j++){
		cin>>arr[i][j];
	}
}
	int key;
	cin>>key;//15

	bool kyakeymili=false;

	int i=0;
	int j=c-1;

	while(i<=r-1 and j>=0){

	if(arr[i][j]==key){
		cout<<"element is present at index "<<i<<", "<<j<<endl;
		kyakeymili=true;
		break;

	}
	else if(arr[i][j]>key){
		j--;
		
	}
	else{
		i++;

	}
}
	if(kyakeymili==false){

	cout<<"element is not present"<<endl;
}


	


	return 0;
}