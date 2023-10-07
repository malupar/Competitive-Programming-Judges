#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		vector<int> v(n);
		vector<int> m;
		vector<int> f;
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(v[i]<0)m.push_back(v[i]);
			else f.push_back(v[i]);
		}
		sort(f.begin(),f.end());
		sort(m.rbegin(),m.rend());
		int contf=0,contm=0;
		for(int i=0;i<n;i++){
			if(i!=0)cout<<' ';
			if(v[i]<0){
			cout<<m[contm];
			contm++;	
			}
			else {
				cout<<f[contf];
				contf++;
			}	
		}
		cout<<'\n';
	}
}
