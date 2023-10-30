#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> a(n);
	vector<int> app(m);
	for(int i = 0; i < n; i++)cin >> a[i];
	for(int i = 0; i < m; i++)cin >> app[i];
	sort(a.begin(),a.end());
	sort(app.begin(),app.end());
	int cont=0, sol=0, ans;
	for(int i = 0; i < n; i++){
		int l = sol,r = m-1;
		ans = -1;
		while(l <= r){
			int mid = (r+l)/2;
			if(app[mid] >= a[i]-k){
				r = mid-1;
				ans = mid;
			}
			else l = mid+1;
		}
		if(ans != -1 && app[ans] <= a[i]+k){
			sol = ans+1;
			++cont;
		}
	}
	cout << cont;
}