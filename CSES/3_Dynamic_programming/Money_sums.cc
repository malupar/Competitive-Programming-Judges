#include <iostream>
#include <set>
using namespace std;
int main(){
	int s, n, maxi = 0;
	s = 100000;
	cin >> n;
	int w[n];
	int dp[n+1][s+1];
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= s; j++) dp[i][j] = 0;
	}
	for(int i = 0; i < n; i++) cin >> w[i];
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= s; j++){
			dp[i][j] = dp[i-1][j];
			if(i && j >= w[i-1]){
				dp[i][j] = max(dp[i][j], dp[i-1][j-w[i-1]]+w[i-1]);
			}
			maxi = max(maxi, dp[i][j]);
		}
	}
	set<int> se;
	for(int i = 0;i <= s; i++){
		if(dp[n][i]) se.insert(dp[n][i]);
	}
	cout << (int)se.size() << '\n';
	for(int x : se) cout << x << ' ';
}