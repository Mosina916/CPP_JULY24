#include<iostream>
#include<list>
#include<queue>
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


	// void bfs(T data){//0
	// 	queue<T> q;
	// 	q.push(data);
	// 	unordered_map<T,bool> visited;
	// 	visited[data]=true;


	// 	while(!q.empty()){
	// 		T x=q.front();//2
	// 		q.pop();
	// 		cout<<x<<" ";
	// 		for(auto p:h[x]){// 0, 1, 3
	// 			if(!visited[p])
	// 			q.push(p);
	// 			visited[p]=true;
	// 		}
	// 	}
	// }



	int shortestpathbetweentwopoints(T data,T dest){//0 2
		queue<T> q;
		q.push(data);
		unordered_map<T,bool> visited;
		visited[data]=true;
		unordered_map<T,int>distance;
		distance[data]=0;
		unordered_map<T,T>parent;
		parent[data]=data;
		while(!q.empty()){
			T x=q.front();//1
			q.pop();
			
			for(auto p:h[x]){
				if(!visited[p]){
				q.push(p);
				visited[p]=true;
				distance[p]=distance[x]+1;
				parent[p]=x;
			}
		}	
	}


	T s=dest;

	while(s!=data){
	cout<<s<<"<--";

	s=parent[s];//0
}

cout<<data<<endl;


return distance[dest];

}

	// for(auto a:distance){
	// 		cout<<"distance of "<<data<<"from "<<a.first<<" is "<<a.second<<endl;
	// 	}
	// }


};
int main(){
	graph<int>g;
	// 	g.addedge("Modi","yogi",true);
	// g.addedge("Modi","Trump",true);

	// g.addedge("prabhu","Modi");
	// g.addedge("yogi","prabhu");
	// g.addedge("putin","Modi");
	// g.addedge("putin","Trump");
	// g.addedge("putin","Pope");

	// g.addedge("pope","");

	

	// g.addedge(0,4);
	// g.addedge(1,4);
	// g.addedge(1,3);
	// g.addedge(4,3);
	// g.addedge(1,2);
	// g.addedge(2,3);
	// g.addedge(0,1);

	// g.print();


	// g.distancetoallnodesfromsrc(0);


	cout<<g.shortestpathbetweentwopoints(4,2)<<endl;


	
// 2--> 1, 3, 
// 3--> 1, 4, 2, 
// 4--> 0, 1, 3, 
// 1--> 0, 4, 3, 2, 
// 0--> 1, 4, 








	return 0;
}