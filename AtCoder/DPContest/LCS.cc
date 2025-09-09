#include <bits/stdc++.h>
using namespace std;

void printDP(int i, int j, vector<vector<int>>& dp, string& s) {
    if (!dp[i][j]) return;
    if (dp[i][j] == dp[i-1][j]) printDP(i-1, j, dp, s);
    else if (dp[i][j] == dp[i][j-1]) printDP(i, j-1, dp, s);
    else {
        printDP(i-1, j-1, dp, s);
        cout << s[i-1];
    }
}

int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();

    vector<vector<int>> dp(n+1, vector<int>(m+1));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            dp[i+1][j+1] = max(dp[i][j]+(s[i] == t[j]), max(dp[i][j+1], dp[i+1][j]));
        }
    }
    printDP(n, m, dp, s);
    cout << '\n';
}