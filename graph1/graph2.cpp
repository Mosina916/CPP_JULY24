#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class graph{
	unordered_map<string,list<string> > h;
public:
	void addedge(string u,string v,bool birdir=false){
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
	graph g;
		g.addedge("Modi","yogi",true);
	g.addedge("Modi","Trump",true);

	g.addedge("prabhu","Modi");
	g.addedge("yogi","prabhu");
	g.addedge("putin","Modi");
	g.addedge("putin","Trump");
	g.addedge("putin","Pope");

	g.addedge("pope","");


	g.print();


	








	return 0;
}