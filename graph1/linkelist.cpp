#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> l;
	l.push_back(5);

	l.push_back(15);
	l.push_back(53);
	l.push_back(55);
	l.push_back(52);


	for(int x:l){
		cout<<x<<"--> ";
	}









	return 0;
}