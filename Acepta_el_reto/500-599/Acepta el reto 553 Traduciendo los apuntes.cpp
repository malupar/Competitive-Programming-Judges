#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n,sum;
	while(cin>>n){
		vector<pair<int,int> >v(n);
		if(n==0)break;
		sum=0;
		for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;
		sort(v.begin(),v.end());
		int llega=0;
		for(int i=0;i<n;i++){
			if(v[i].second<=llega)continue;
			if(v[i].first<=llega){
				sum+=v[i].second-llega;
				llega=v[i].second;
			}
			if(v[i].first>llega){
				sum+=v[i].second-v[i].first+1;
				llega=v[i].second;
			}
			//cout<<sum<<' ';
		}
		cout<<sum<<'\n';
	}
}
