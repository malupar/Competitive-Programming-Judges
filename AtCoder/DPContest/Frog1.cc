#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<int> heights(N);
    for (int i = 0; i < N; ++i)
        cin >> heights[i];

    vector<int> dp(N);
    for (int i = 1; i < N; ++i) {
        dp[i] = dp[i-1]+abs(heights[i]-heights[i-1]);
        if (i > 1) dp[i] = min(dp[i], dp[i-2]+abs(heights[i]-heights[i-2]));
    }

    cout << dp[N-1] << '\n';
}