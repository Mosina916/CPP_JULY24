#include <iostream>
using namespace std;
bool compt(string a,string b){
	int l1=a.length();//3
	int l2=b.length();//6
	if(l1>=l2 and a.substr(0,l2)==b){
		return true;
	}
	else{


	return a<b;
}

}
int main(){
	int n;
	cin>>n;//3


	string arr[1000];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}


	sort(arr,arr+n,compt);//lexo
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

// 	bat
// apple
// batman




	return 0;
}