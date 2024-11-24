#include<iostream>
#include<vector>
using namespace std;
class heap{
	vector<int> v;
public:
	heap(){
		v.push_back(-1);

	}

	void insert(int d){
		v.push_back(d);
		int c=v.size()-1;

		while(c!=1){
		int p=c/2;
		if(v[c]<v[p]){
			swap(v[c],v[p]);

		}
		c=p;
	}
	}


	void heapify(int index){
		int miat=index;
		int li=2*miat;
		int ri=li+1;
		if(li<=v.size()-1 and v[li]<v[miat]){
			miat=li;
		}
		if(ri<=v.size()-1 and v[ri]<v[miat]){
			miat=ri;
		}

		if(miat!=index){
			swap(v[miat],v[index]);
			heapify(miat);
		}

	}


	void deletee(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);

	}

	int top(){
		return v[1];
	}
	int size(){
		return v.size()-1;
	}
	bool empty(){
		return v.size()==1;
	}
};
int main(){
	heap h;
	h.insert(1);
	h.insert(2);

	h.insert(3);
	h.insert(17);
	h.insert(19);
	h.insert(36);
	h.insert(7);
	h.insert(25);
	h.insert(100);
	h.insert(0);


	while(!h.empty()){
	cout<<h.top()<<" ";//0 1
	h.deletee();
}




	// heap sort







	return 0;
}