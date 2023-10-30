#include <iostream>
#include <string>
using namespace std;

int main(){
	string str, str2;
	cin >> str >> str2;
	int n = str.length();
	int m = str2.length();
	int dp[n+1][m+1];
	for(int i = 0; i <= n; i++)
        for(int j = 0; j <= m; j++)
            dp[i][j] = 1e9;
	dp[0][0] = 0;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= m; j++){
            if (i) dp[i][j] = min(dp[i][j], dp[i-1][j]+1);
            if (j) dp[i][j] = min(dp[i][j], dp[i][j-1]+1);
            if (i&&j) dp[i][j] = min(dp[i][j], dp[i-1][j-1]+(str[i-1] != str2[j-1]));
		}
	}
	cout << dp[n][m] << '\n';
}