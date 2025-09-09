#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N), b(N), c(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }
    vector<vector<int>> dp(N+1, vector<int>(3));

    for (int i = 0; i < N; ++i) {
        dp[i+1][0] = max(dp[i][1], dp[i][2])+a[i];
        dp[i+1][1] = max(dp[i][0], dp[i][2])+b[i];
        dp[i+1][2] = max(dp[i][0], dp[i][1])+c[i];
    }

    cout << max(dp[N][0], max(dp[N][1], dp[N][2])) << '\n';
}