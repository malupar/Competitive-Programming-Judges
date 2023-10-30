#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int dp[n+1];
        dp[0] = 0;
        vector<int> t(n);
        for(int& i : t) cin >> i;

        for (int i = 1; i <= n; ++i) {
            dp[i] = 1;
            for (int j = 1; j < i; ++j) {
                if (t[i-1] >= 10+ t[j-1]) dp[i] = max(dp[i], dp[j]+1);
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; ++i) ans = max(ans, dp[i]);
        cout << ans << '\n';
    }
}