#include<iostream>
#include<queue>
using namespace std;

void printheap(priority_queue<int,vector<int>, greater<int> > h){
	while(!h.empty()){
	cout<<h.top()<<" "<<endl;
	h.pop();
}//4 7 9


}
int main(){
	// kth largest  -->3

	  // 1 23 13 4 34 35 353 4 2 -1


	  int k;
	  cin>>k;//3
	  priority_queue<int,vector<int>, greater<int> > h;
	  int co=0;
	   int data;
	  cin>>data;//3
	  while(true){
	

	  if(co<k){
	  h.push(data);
	  co++;//3
	}
	else{
		if(data==-1){
			printheap(h);
		}
		else if(data>h.top()){
			h.pop();
			h.push(data);
		}


	}
	cin>>data;/// 7 9 4 2 -1 17

}
	







	return 0;
}