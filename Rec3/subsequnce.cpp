#include<iostream>
using namespace std;
int c=0;
void subsequ(char inpu[100],char outp[100],int i,int j){
	/*base case*/
	if(inpu[i]=='\0'){
		outp[j]='\0';
		c++;
		cout<<outp<<endl;
		return;
	}


	// rec case
	subsequ(inpu,outp,i+1,j);
	outp[j]=inpu[i];
	subsequ(inpu,outp,i+1,j+1);

}
int main(){
	char inpu[100];
	cin.getline(inpu,100);//"abc"
	char outp[100];
	subsequ(inpu,outp,0,0);
	cout<<c<<endl;


	return 0;
}