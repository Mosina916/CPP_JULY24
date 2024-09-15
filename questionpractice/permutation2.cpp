#include<iostream>
using namespace std;
bool ispermutation(string s1,string s2){
	if(s1.length()!=s2.length()){
		return false;
	}
	else{
		// donu ki length equal hogi

		int freq1[52]={};

		for(int i=0;s1[i]!='\0';i++){
			if(islower(s1[i])){
				int x=s1[i]-71;//2
		freq1[x]++;

			}
			else{
				int x=s1[i]-65;//2
			freq1[x]++;
			}
		
	}

	for(int i=0;s2[i]!='\0';i++){
			if(islower(s2[i])){
				int x=s2[i]-71;//2
		freq1[x]--;

			}
			else{
				int x=s2[i]-65;//2
			freq1[x]--;
			}
	}


	for (int i = 0; i <=51; ++i)
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
