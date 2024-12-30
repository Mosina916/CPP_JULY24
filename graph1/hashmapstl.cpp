#include<iostream>
#include<map>
using namespace std;
int main(){
	// unordered_map<int,int> h;
	h[5]=10;
	h[50]=20;
	h[100]=15;
	// h.insert(make_pair(6,18));

	// for(auto x:h){
	// 	cout<<x.first<<" -->"<<x.second<<endl;


	// }

	//  if (h.find(500) !=h.end()){
	//  	 cout << 500 << " is found\n";
	//  }
   

 //  else{
 //    cout << "Found  not " << 500 << "\n\n";
	// }


	map<string,string> h;
	
	h.insert(make_pair("apple","red"));

	h.insert(make_pair("App","blue"));
	h.insert(make_pair("banana","yellow"));
	h.insert(make_pair("mango","yellow"));

	for(pair<string,string> x:h){
		cout<<x.first<<" -->"<<x.second<<endl;


	}

  








	return 0;
}