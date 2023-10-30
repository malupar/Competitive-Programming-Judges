#include <iostream>
#include <vector>

using namespace std;

const int mod = 1e8+7;

int DP (int i, int letter, vector<vector<int>>& dp, vector<int>& fixed) {
    if (fixed[i] != -1 && fixed[i] != letter) return 0;
    if (dp[i][letter] != -1) return dp[i][letter];
    int ans = 0;
    for (int j = 0; j < 3; ++j) {
        if (letter == j) continue;
        ans = (ans + DP(i-1,j,dp,fixed))%mod;
    }
    return dp[i][letter] = ans;
}

int main() {
    int n, f;
    while (cin >> n >> f) {
        vector<vector<int>> dp (n+1, vector<int>(3,-1));
        dp[0][0] = dp[0][1] = dp[0][2] = 1;
        vector<int> fixed (n,-1);
        for (int j = 0; j < f; ++j) {
            char x;
            int pos;
            cin >> pos >> x;
            fixed[pos] = x-'a';
        }
        cout << (DP(n-1,0,dp,fixed) + DP(n-1,1,dp,fixed) + DP(n-1,2,dp,fixed))%mod << '\n';
    }
}