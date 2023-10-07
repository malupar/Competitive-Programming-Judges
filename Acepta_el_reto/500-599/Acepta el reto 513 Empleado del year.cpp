#include <iostream>
using namespace std;
int main(){
	int d,n;
	while(cin>>d){
		long long int cont=0,sum=0;
		for(int i=1;i<=d;i++){
			if(i!=1)cout<<' ';
			cin>>n;
			int tot=n*i;
			int k=tot-sum;
			cout<<tot-sum;
			sum+=k;
		}
		cout<<'\n';
	}
}
