#include <iostream>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	long long int n,num,maxi,suma;
	cin>>n;
	while(n!=0){
		maxi=0;
		suma=0;
		for(int i=0;i<n;i++){
			cin>>num;
			suma+=num;
			if(num>maxi)maxi=num;
		}
		cout<<maxi*n-suma<<'\n';
		cin>>n;
	}
}
