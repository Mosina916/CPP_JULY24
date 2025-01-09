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
	void addedge(T u,T v,bool birdir=false){
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
	int board[50]={0};
	board[2] = 13; 
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17]=-13; 
	board[20] = -14;
	board[24] = -8; 
	board[25] = 10; 
    board[32] = -2; 
    board[34] = -22;

    for(int src=0;src<=35;src++){//3
    for(int dice=1;dice<=6;dice++){


    int dest=src+dice+board[src+dice];

    g.addedge(src,dest);
}
}


	


	cout<<g.shortestpathbetweentwopoints(0,36)<<endl;











	return 0;
}