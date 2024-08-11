#include<iostream>
using namespace std;
int main(){


	int arr[]={4,5,1,2,3,3,2,3,4,5,3,3,4,3,0,0,8,7,6,6};
	int n=sizeof(arr)/sizeof(int);


	for(int posl=0;posl<=n-2;posl++){
		int minid=posl;
		for (int j = minid+1; j <=n-1 ;j++)
		{
			if(arr[minid]>arr[j]){
				minid=j;
			}
		}
		swap(arr[posl],arr[minid]);
	}


for (int i = 0; i <n; ++i)
{
	cout<<arr[i]<<" ";//1 2 3 4 5
}

cout<<endl;


	return 0;
}