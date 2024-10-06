#include<iostream>
#include<vector>
using namespace std;


int main(){

	// vector<dataype> name;
	vector<int> v;
	// vname.push_back();
	v.push_back(3);
	v.push_back(5);
	v.push_back(15);

	// cout<<v.size()<<endl;//3
	// cout<<v.capacity()<<endl;//4


	v.push_back(20);

	// cout<<v.size()<<endl;//3
	// cout<<v.capacity()<<endl;//4

	v.push_back(30);
	v.push_back(70);

	cout<<v.size()<<endl;//3
	cout<<v.capacity()<<endl;//4

	v.pop_back();
		v.pop_back();

	cout<<v.size()<<endl;//3
	cout<<v.capacity()<<endl;//4


	for(int i=0;i<=v.size()-1;i++){
		cout<<v[i]<<" ";
	}

	cout<<endl;


	// cout<<v.at(2)<<endl;
	cout<<v.front()<<endl;






	return 0;
}