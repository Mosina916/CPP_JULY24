#include<iostream>
using namespace std;
class node{
public:
	string fn;
	string fc;
	node*next;
	node(string fname,string fcol){
		fn=fname;
		fc=fcol;
		next=NULL;
	}
};


class hashmap{
	node**arr;
	int cs;
	int ts;
public:
	hashmap(int size){
		arr=new node*[size];
		cs=0;
		ts=size;

		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}

	}


	int hashfunction(string s){
		int ans=0;
		int mult=1;
		for (int i = 0; i <=s.length()-1; ++i)
		{
			ans=(ans%ts+(s[i]%ts*mult%ts)%ts)%ts;
			mult=(mult%ts*29%ts)%ts;
		}
		return ans%ts;
	}


	void rehashing(){
		node**oldarr=arr;
		arr=new node*[2*ts];
		int oldts=ts;
		ts=2*ts;//14
		cs=0;
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}
		// /transfer oldarr to arr
		for(int i=0;i<oldts;i++){
		node*q=oldarr[i];//250
		while(q!=NULL){
			insert(q->fn,q->fc);
			q=q->next;
		}
	}
	delete[]oldarr;
	oldarr=NULL;




	}


	void insert(string fname,string fcol){
		int indx=hashfunction(fname);
		node*n=new node(fname,fcol);
		n->next=arr[indx];
		arr[indx]=n;
		cs++;
		if((cs*1.0/ts)>0.5){
			rehashing();
		}
	}


	void printhmap(){


		for(int i=0;i<ts;i++){
			cout<<i<<" : ";
			node*p=arr[i];//

			while(p!=NULL){
			cout<<'('<<p->fn<<","<<p->fc<<"),";
			p=p->next;
		}
		cout<<endl;


		}
	}


	bool searchinhashmap(string s){

		int indx=hashfunction(s);//3
		node* q=arr[indx];

		while(q!=NULL){
			if(q->fn==s){
				return true;
			}
			q=q->next;
		}
		return false;

	}




};
int main(){
	hashmap h(7);
	h.insert("abc","red");
	h.insert("bac","green");
	h.insert("rpd","green");
	h.insert("tub","blue");

	// h.insert("ess","bggg");

	h.printhmap();


	searchinhashmap("mango");


	
	return 0;
}