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

    vector<ll> dp(W+1);
    for (int i = 0; i < N; ++i) {
        for (int j = W; j >= w[i]; --j) 
            dp[j] = max(dp[j], dp[j-w[i]]+v[i]);
    }
    cout << dp[W] << '\n';
}