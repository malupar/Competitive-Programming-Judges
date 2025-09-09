#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> w(N), v(N);
    for (int i = 0; i < N; ++i) {
        cin >> w[i] >> v[i];
    }
    ll ans = 0;
    vector<ll> dp(1e5+2, 1e9+2);
    dp[0] = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 1e5; j >= v[i]; --j) {
            dp[j] = min(dp[j], dp[j-v[i]]+w[i]);
            if (dp[j] <= W) ans = max(ans, j*1ll);
        }
    }
    cout << ans << '\n';
}