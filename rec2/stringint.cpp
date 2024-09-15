#include<iostream>
using namespace std;
int stringtoint(string s,int l){//""
	if(l==0){
		return 0;
	}

	int x=s[l-1]-'0';//'2'-'0'-->2

	return stringtoint(s,l-1)*10+x;//"374"-->374*10+2

}
int main(){
	string s;
	getline(cin,s);//"3742"
	int l=s.length();//4
	cout<<stringtoint(s,l)<<endl;




	return 0;
}