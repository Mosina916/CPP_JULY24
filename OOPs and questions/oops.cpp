#include<iostream>
using namespace std;
class car{
public:
	string cname;
	string ccol;
	int cp;

	car(){
		
	}
	// paramterized contructor
	// car(string n,string c,int p){
	// 	cname=n;
	// 	ccol=c;
	// 	cp=p;

	// }


	car(string cname,string ccol,int cp){
		this->cname=cname;
		this->ccol=ccol;
		this->cp=cp;

	}

	car(string cname,string ccol){
		this->cname=cname;
		this->ccol=ccol;
		this->cp=100;

	}

	void getter(){
		cout<<cname<<endl;
		cout<<ccol<<endl;
		cout<<cp<<endl;
	}

	void setter(){
		cin>>cname;
		cin>>ccol;
		cin>>cp;
	}


};

int main(){
	car x[100];

	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		x[i].setter();


	}


	for(int i=0;i<n;i++){
		x[i].getter();
		

	}

	// int a;
	// car w;
	// w.setter();
	// w.getter();
	// car p;//p is an variable/object of type car
	
	// p.cname="bmw";
	// p.ccol="blue";
	// p.cp=100;
	// cout<<p.cname<<endl;
	// cout<<p.ccol<<endl;
	// cout<<p.cp<<endl;


	// car p("bmw","white",100);
	// car u("wew","wite",500);
	// car u("wew","wite");
		// car w;

	// u.printv();
	// cout<<p.cname<<endl;
	// cout<<p.ccol<<endl;
	// cout<<p.cp<<endl;




	// cout<<u.cname<<endl;
	// cout<<u.ccol<<endl;
	// cout<<u.cp<<endl;




	return 0;
}