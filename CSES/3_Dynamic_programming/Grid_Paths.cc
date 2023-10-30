#include <iostream>
#include <vector>
 
using namespace std;
 
const int mod = 1e9+7; //1000000007
 
int main() {
    int n;
    cin >> n;
 
    vector<vector<int>> dp (n, vector<int> (n));
    char grid[n][n];
    dp[0][0] = 1;
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == '*') {
                dp[i][j] = 0;
                continue;
            }
 
            if (i && grid[i-1][j] == '.') {
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= mod;
            }
            if (j && grid[i][j-1] == '.') {
                dp[i][j] += dp[i][j-1];
                dp[i][j] %= mod;
            }
        }
    }
 
    cout << dp[n-1][n-1] << '\n';
}