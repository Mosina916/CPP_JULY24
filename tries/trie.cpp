#include<iostream>
#include<unordered_map>
using namespace std;
class node{
public:
	char ch;
	bool isterminal;
	unordered_map<char,node*> h;
	node(char c){
		ch=c;
		isterminal=false;

	}
};

class trie{
	node*root;
public:
	trie(){
		root=new node('\0');

	}

	void insert(string s){//"heloo"
	node*temp=root;
	for(int i=0;s[i]!='\0';i++){
		char x=s[i];//'\0
		if(temp->h.count(x)){
			temp=temp->h[x];

		}
		else{
			temp->h[x]=new node(x);
			temp=temp->h[x];
		}
	}
	temp->isterminal=true;


	}


	bool search(string s){//"helo"
	node*temp=root;
	for(int i=0;s[i]!='\0';i++){
		char x=s[i];//e
		if(temp->h.count(x)){
			temp=temp->h[x];

		}
		else{
			return false;
		}
	}
	return temp->isterminal;


	}

};
int main(){
	trie t;
	t.insert("hell");
	t.insert("cat");
	t.insert("heloo");


	if(t.search("heloo")){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"No"<<endl;

	}




	return 0;
}