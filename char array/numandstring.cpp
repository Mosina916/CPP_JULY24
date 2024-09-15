#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	cin.ignore();//1 char ignore 
	// cin.ignore();

	char arr[100];
	cin.getline(arr,100);//'\n'

	cout<<n<<endl;
	cout<<arr<<endl;
	
	return 0;
}