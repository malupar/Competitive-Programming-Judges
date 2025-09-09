#include <bits/stdc++.h>
using namespace std;

const int max_n = 2004;

const int mod = 1e8+9;

int dp[max_n][max_n];
vector<vector<int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
int DP(int i, int j) {
    if (dp[i][j] != -1) return dp[i][j];
    int ans = 0;
    for (int k = 0; k < dirs.size(); ++k) {
        int x = abs(i+dirs[k][0]), y = abs(j+dirs[k][1]);
        if (i*i+j*j > x*x+y*y) {
            ans += DP(x, y);
            ans %= mod;
        }
    }
    return dp[i][j] = ans;
}

int main() {
    int x, y;
    for (int i = 0; i < max_n; ++i) {
        for (int j = 0; j < max_n; ++j) dp[i][j] = -1;
    }

    dp[0][0] = 1;
    while (cin >> x >> y) {
        if (!x and !y) break;
        x = abs(x);
        y = abs(y);

        cout << DP(x, y) << '\n';
    }
}