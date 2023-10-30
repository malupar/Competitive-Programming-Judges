#include <iostream>
using namespace std;
 
int main(){
	int s, n, maxi = 0;
	cin >> n >> s;
	int w[n+1], c[n+1];
	int dp[n+1][s+1];
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= s; j++) 
            dp[i][j]=0;
	}
	for(int i = 1; i <= n; i++) cin >> w[i];
	for(int i = 1; i <= n; i++) cin >> c[i];
	for(int i = 1; i <= n; i++) {
		for(int j = 0; j <= s; j++){
			dp[i][j] = dp[i-1][j];
			if(j >= w[i]){
				dp[i][j] = max(dp[i-1][j-w[i]] + c[i], dp[i][j]);
			}
		}
	}
	cout << dp[n][s] << '\n';
}