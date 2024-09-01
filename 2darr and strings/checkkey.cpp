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
	cin>>key;//6
	bool kyakeymili=false;
	int i;
	for(i=0;i<=r-1;i++){
	for(int j=0;j<=c-1;j++){

	if(arr[i][j]==key){
		cout<<"element is  present at index "<<i<<", "<<j<<endl;
		kyakeymili=true;
		break;
		// return 0l;


			}
		}
		if(kyakeymili==true){
			break;
		}

	}
	if(i==r){
		cout<<"element is not present"<<endl;
	}


	return 0;
}