#include <iostream>
#include <vector>
using namespace std;
#define int long long int
signed main(){
	int n, k, ans;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
        cin >> v[i];
	int l = 0, r = 1e18;
	while(l <= r){
		int mid = (r+l)/2;
		int sol = 0;
		for(int i = 0; i < n; i++){
			sol += mid/v[i];
			if(sol >= k)break;
		}
		if(sol<k) l = mid+1;
		else{
			r = mid-1;
			ans = mid;
		}
	}
	cout << ans << endl;
}