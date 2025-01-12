#include <iostream>
using namespace std;
bool amiabletoreadallbookswithnswithcapmid(int *books,int nb,int ts,int tcapaity){
	int sc=1;
	int ckitnepagespadei=0;
	for(int j=0;j<nb;j++){
	if(ckitnepagespadei+books[j]>tcapaity){//0+12
		sc++;//3
		ckitnepagespadei=books[j];//90
		if(sc>ts){
			return false;
		}

	}
	else{
		ckitnepagespadei=ckitnepagespadei+books[j];//46
	}

}
return sc<=ts;

}
int main(){
	int t;
	cin>>t;
	for (int i = 0; i <t; ++i)
	{
		int books[1000];

		int nb,ns;
		cin>>nb>>ns;//4 2
		int total=0;
		for (int i = 0; i <nb; ++i)
		{
			cin>>books[i];
			total=total+books[i];

		}
		// 12 34 67 90
		int s=books[nb-1];//90
		int e=total;
		int fans;

		while(s<=e){
		int mid=(s+e)/2;//146
		if(amiabletoreadallbookswithnswithcapmid(books,nb,ns,mid)){
			fans=mid;//146
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}


	cout<<fans<<endl;


	}

	

	return 0;
}