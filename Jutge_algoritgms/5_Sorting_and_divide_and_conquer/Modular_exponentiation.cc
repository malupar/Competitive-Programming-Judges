#include <iostream>
#include <vector>
using namespace std;

int binexp(int n,int m,int mod){
	if(!m)return 1;
	int k=binexp(n,m/2,mod);
	if(m&1)return ((k*k)%mod*n)%mod;
	else return (k*k)%mod;
}
signed main(){
	int n,m,k;
	while(cin>>n>>m>>k){
		cout<<binexp(n,m,k)<<'\n';
	}
}