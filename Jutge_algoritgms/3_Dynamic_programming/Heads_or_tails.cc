#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

typedef long double ld;

int main() {
    int m, n;
    while (cin >> m >> n) {
        vector<vector<ld>> dp(m+1, vector<ld>(n+1)); // heads and tails
        vector<ld> p(n);
        for(ld& i: p) cin >> i;

        dp[0][0] = 1;
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i <= m; ++i) {
                if (j and i != m) dp[i][j] += dp[i][j-1]*(1-p[j-1]);
                if (i) dp[i][j] += dp[i-1][j]*p[j];
            }
        }

        ld ans = 0;
        for (int i = 0; i < n; ++i) {
            ans += dp[m][i];
            //cout << dp[m][i] << ' ';
        }
        cout << fixed << setprecision(4) << ans << endl;
    }
}