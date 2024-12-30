#include<iostream>
#include<list>
using namespace std;

class graph{
	list<int>*l;
	int n;
public:
	graph(int s){
		l=new list<int>[s];
		n=s;
	}

	void insert(int u,int v,bool birdir=true){
		l[u].push_back(v);
		if(birdir){
			l[v].push_back(u);

		}

	}
	void print(){
		for(int i=0;i<n;i++){
			cout<<i<<"-->";
			for(auto x:l[i]){
				cout<<x<<", ";

			}
			cout<<endl;
		}
	}




};
int main(){
	graph g(5);
	g.insert(0,1);

	g.insert(0,4);
	g.insert(1,4);
	g.insert(1,3);
	g.insert(4,3);
	g.insert(1,2);
	g.insert(2,3);

	g.print();
	








	return 0;
}