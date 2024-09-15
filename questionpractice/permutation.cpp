#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int arr[]={3,1,-5,6,-2,4,-12,1,5,1};
	int n=sizeof(arr)/sizeof(int);


	int cs=0;
	int ms=0;
	for (int i = 0; i <n ; ++i)
	{
		cs=cs+arr[i];
		if(cs<0){
			cs=0;
		}
		ms=max(cs,ms);

	}


	cout<<ms<<endl;

	return 0;
}
