#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s, t;
    while (cin >> s >> t) {
        int n=s.size(),m=t.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,1e9));
        dp[0][0]=0;
        for (int i=0;i<=n;++i){
            for (int j=0;j<=m;++j){
                if(i<n)dp[i+1][j]=min(dp[i+1][j],dp[i][j]+10);
                if(j<m)dp[i][j+1]=min(dp[i][j+1],dp[i][j]+10);
                if(i<n&&j<m)dp[i+1][j+1]=min(dp[i+1][j+1],dp[i][j]+abs(s[i]-t[j]));
            }
        }
        cout << dp[n][m] << '\n';
    }
}