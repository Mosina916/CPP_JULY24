#include<iostream>
using namespace std;
bool ispermutation(string s1,string s2){
	if(s1.length()!=s2.length()){
		return false;
	}
	else{
		// donu ki length equal hogi

		int freq1[26]={};

		for(int i=0;s1[i]!='\0';i++){
		int x=s1[i]-65;//2
		freq1[x]++;
	}

	for(int i=0;s2[i]!='\0';i++){
		int x=s2[i]-65;//2
		freq1[x]--;
	}


	for (int i = 0; i <=25; ++i)
	{
		if(freq1[i]!=0){
			return false;
		}
	}


	return  true;


	}
}
int main(){


	string s1;
	getline(cin,s1);//ACZPPAY

	string s2;
	getline(cin,s2);//AYZPACP

	if(ispermutation(s1,s2)==true){
		cout<<"yes permutation"<<endl;
	}
	else{
		cout<<"not permutation"<<endl;
	}
	


	return 0;
}
