#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,s;
	while(cin>>n>>s){
		int ans;
		vector<int> v(n);
		int l=0,r=1e9;
		for(int i=0;i<n;i++){
			cin>>v[i];
			l=max(l,v[i]);
		}
		while(l<=r){
			int mid=(r+l)/2;
			int k=mid,cont=0;
			for(int i=0;i<n;i++){
				if(v[i]>k){
					cont++;
					k=mid-v[i];
				}
				else k-=v[i];
			}
			if(cont<=s){
				ans=mid;
				r=mid-1;
			}
			else l=mid+1;
		}
		cout<<ans<<'\n';
	}
}