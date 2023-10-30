#include <iostream>
#include <vector>
using namespace std;
#define int long long
signed main(){
	int n, k, ans, l=0, r=1e18;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
		l = max(l,v[i]);
	}
	while(l <= r){
		int sum = 0,used = 1,mid = (r+l)/2;
		for(int i = 0; i < n; i++){
			if(sum+v[i] > mid){
				used++;
				sum = 0;
			}
			sum += v[i];
		}
		if(used > k) l = mid+1;
		else{
			ans = mid;
			r = mid-1;
		}
	}
	cout << ans << '\n';
}