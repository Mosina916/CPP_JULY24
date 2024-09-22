#include<iostream>
using namespace std;
string moveallxatend(string s){//\0
	if(s.length()==0){
		return s;

	}
	char ch=s[0];//p
	if(ch=='x'){
		return moveallxatend(s.substr(1))+'x';
	}
	else{
		return ch+moveallxatend(s.substr(1));
	}

}
int main(){
	string s;
	getline(cin,s);//"pxxuouwxxuxu"
	

	cout<<moveallxatend(s)<<endl;

					// "xpxxpouwxxuxu"

	

	return 0;
}