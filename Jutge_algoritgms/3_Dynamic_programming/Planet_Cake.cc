#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

typedef long double ld;
vector<vector<vector<ld>>> dp;

int main() {
    int n;
    while (cin >> n) {
        dp = vector<vector<vector<ld>>>(n, vector<vector<ld>>(n/2+1, vector<ld>(2)));
        vector<ld> v(n);
        for (ld& i: v) cin >> i;
        ld ans = 0;
        for (int i = 0; i < n; ++i) {
            dp[i][0][0] = 1-v[i];
            dp[i][0][1] = v[i];
        }
        for (int i = 1; i <= n/2; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < 2; ++k) {
                    dp[j][i][k] = dp[(j-1+n)%n][i-1][k]*(1-v[j]) + dp[(j+1)%n][i-1][1-k]*v[j];
                }
            }
        }
        for (int i = 0; i <= n/2; ++i) ans = max(ans, dp[n/2][i][1]);
        cout << fixed << setprecision(4) << ans << endl;
    }
}