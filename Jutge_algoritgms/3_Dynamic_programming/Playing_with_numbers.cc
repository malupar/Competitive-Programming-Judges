#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int& i: v) cin >> i;
        vector<vector<set<int>>> dp(n, vector<set<int>>(n));
        for (int i = 0; i < n; ++i) dp[i][i].insert(v[i]);

        for (int j = 1; j < n; ++j) {
            for (int i = 0; i < n-j; ++i) {
                for (int k = 0; k < j; ++k) {
                    for (auto x: dp[i][i+k]) {
                        for (auto y: dp[i+k+1][i+j]) {
                            dp[i][i+j].insert(x+y);
                            dp[i][i+j].insert(x*y);
                        }
                    }
                }
            }
        }
        bool f = false;
        for (auto x: dp[0][n-1]) {
            if (f) cout << ' ';
            else f = true;
            cout << x;
        }
        cout << endl;
    }
}