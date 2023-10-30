#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9+7;

int main(){
	int n, x;
	cin >> n >> x;
	vector<int> c(n);
	for(int& v : c) cin >> v;
	vector<vector<int>> dp(n+1,vector<int>(x+1,0));
	dp[0][0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= x; j++){
			dp[i][j] = dp[i-1][j];
			if(c[i-1] <= j){
				dp[i][j] += dp[i][j-c[i-1]];
				dp[i][j] %= mod;
			}
		}
	}
	cout << dp[n][x] << '\n';
}