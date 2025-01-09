#include<iostream>
#include<list>

#include<queue>
#include <unordered_map>
using namespace std;

template<typename T>
class graph{
	unordered_map<T,list<pair<T,int> > > h;

public:



		void addedge(T u,T v,int dist,bool bird=true){
		h[u].push_back(make_pair(v,dist));

		if(bird==true){
			h[v].push_back(make_pair(u,dist));

		}

	}

	void printgraph(){
		for(auto x:h){
			cout<<x.first<<" --> ";
			for(auto p:x.second){
				cout<<'('<<p.first<<","<<p.second<<"),";

			}

			cout<<endl;


		}
	}


	

};
int main(){
	graph<string> g;
	g.addedge("amritsar","agra",1);
	g.addedge("amritsar","jaipur",4);

	g.printgraph();


	
	return 0;
}