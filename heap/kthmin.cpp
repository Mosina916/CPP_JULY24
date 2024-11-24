#include<iostream>
#include<queue>
using namespace std;
int main(){
	// kth largest  -->3

	  // 1 23 13 4 34 35 353 4 4 2 -1


	  int k;
	  cin>>k;
	  priority_queue<int> h;
	  int co=0;
	   int data;
	  cin>>data;
	  while(data!=-1){
	 //1 23 13 4 34

	  if(co<k){
	  h.push(data);
	  co++;//3
	}
	else{
		if(data<h.top()){
			h.pop();
			h.push(data);
		}

	}
	cin>>data;

}
	
	cout<<h.top()<<" "<<endl;










	return 0;
}