#include<iostream>
using namespace std;
void insesort(){
	int arr[]={3,2,3,21,1,3,2,3,2,3,2,3};
	int n=sizeof(arr)/sizeof(int);

	//2 3,1,3 21
	for(int index=1;index<=n-1;index++){//4
		int ele=arr[index];//
		for(int j=index-1;j>=0;j--){//1
			if(ele<arr[j]){//1<3
				swap(arr[j+1],arr[j]);

			}
			else{
				break;
			}
		}
	}




	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";//1 2 3 4 5
	}

	cout<<endl;
}
int main(){ 
	insesort();
	


	return 0;
}