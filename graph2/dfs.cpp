#include<iostream>
#include<list>

#include<queue>
#include <unordered_map>
using namespace std;

template<typename T>
class graph{
	unordered_map<T,list<T> > h;

public:



		void addedge(T u,T v,bool bird=true){
		h[u].push_back(v);

		if(bird==true){
			h[v].push_back(u);

		}

	}

	void printgraph(){
		for(auto x:h){
			cout<<x.first<<" --> ";
			for(auto p:x.second){
				cout<<p<<" ";

			}

			cout<<endl;


		}
	}


	// 0 2 : 0-->1-->2
	int  snakeandladder(T src,T dest){//breadth first search 0

		unordered_map<T,T> parent;

		parent[src]=src;

		unordered_map<T,int> distance;
		distance[src]=0;

		queue<T> q;
		q.push(src);//
		unordered_map<T,bool> visited;
		visited[src]=true;
		while(!q.empty()){
		T x=q.front();//2
		q.pop();
		// cout<<x<<" ";//4

		for(auto p:h[x]){
			if(!visited[p]){
				q.push(p);
				visited[p]=true;
				distance[p]=distance[x]+1;
				parent[p]=x;
			}
		}
		}

		// cout<<endl;

		// return distance[dest];

	T temp=dest;//2

	while(temp!=src){
		cout<<temp<<"<--";
	temp=parent[temp];//0

	}
	cout<<src<<endl;

	return distance[dest];

	}


	void dfs(T src,unordered_map<int,bool> &visited){
		// cout<<src<<" ";
		visited[src]=true;//4

		for(auto x:h[src]){
			if(!visited[x]){
				dfs(x,visited);
			}

		}
		
	}



	int counttotalcompontents(T src){//0
		int comp=1;

		unordered_map<T,bool> visited;
		dfs(src,visited);

		for(auto x:h){
			if(!visited[x.first]){
				comp++;
				dfs(x.first,visited);

			}

		}

		return comp;
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

	g.addedge(10,11);
	g.addedge(10,12);
	g.addedge(11,12);

	g.addedge(100,14);
	g.addedge(100,15);
	


	

// 2 --> 1 3 
// 3 --> 1 4 2 
// 4 --> 0 1 3 
// 1 --> 0 4 3 2 
// 0 --> 1 4 

	// unordered_map<int,bool> visited;

	// g.dfs(0,visited);

	// g.printgraph();
	cout<<g.counttotalcompontents(0)<<endl;




	
	return 0;
}