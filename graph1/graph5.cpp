#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
template<typename T>
class graph{
	// unordered_map<int,list<int> > h;
	unordered_map<T,list<T> > h;
public:
	void addedge(T u,T v,bool birdir=true){
		h[u].push_back(v);
		if(birdir){
			h[v].push_back(u);

		}

	}


	void print(){
		for(auto x:h){
			cout<<x.first<<"--> ";
			for(auto p:x.second){
				cout<<p<<", ";

			}
			cout<<endl;

		}
	}


};
int main(){
	graph<int>g;

	g.addedge(0,1);

	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(1,3);
	g.addedge(4,3);
	g.addedge(1,2);
	g.addedge(2,3);

	// g.print();


	g.print();

	g.bfs(0);


	








	return 0;
}