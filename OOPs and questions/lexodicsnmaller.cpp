#include<iostream>
using namespace std;
// vector<string> v;
void permutation(char inp[100],int i){
	if(inp[i]=='\0'){
	
		cout<<inp<<endl;
	
		return;
	}
	for(int j=i;inp[j]!='\0';j++){
	swap(inp[i],inp[j]);
	permutation(inp,i+1);
	swap(inp[i],inp[j]);//backtracking
}

}

int main(){

	char inp[100];

	cin.getline(inp,100);//bac


	sort(inp,inp+sizeof(inp));
	
	permutation(inp,0);
	

	return 0;
}