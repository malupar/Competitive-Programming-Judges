#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int t,n;
	cin>>t;
	while(t--){
		int cont=0;
		cin>>n;
		int x=n;
		while(x!=6174){
		vector<int>v(4);
		for(int i=0;i<4;i++){
			v[i]=x%10;
			x-=v[i];
			x/=10;
		}
		sort(v.begin(),v.end());
		int neo=0,m=0;
		for(int i=0;i<4;i++){
			m*=10;
			neo*=10;
			m+=v[i];
			neo+=v[3-i];
		}
		if(neo==m){
			cont=8;
			break;
		}
		else{
			cont++;
			x=neo-m;
		}
	}
	cout<<cont<<'\n';
}
}
