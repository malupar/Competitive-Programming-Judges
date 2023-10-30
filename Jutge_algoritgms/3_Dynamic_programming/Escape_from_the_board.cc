#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;

vector<pair<int,int>> mov_king = {{-1, 0}, {0, -1}, {-1, -1}};
vector<pair<int,int>> mov_knight = {{-1, -2}, {-2, -1}};

int DP(int i, int j, VVI& dp, VVI& grid, int n, int m) {
    if (i < 0 || j < 0) return 1;
    if (dp[i][j] != -1) return dp[i][j];
    if (!grid[i][j]) return 0;
    int ans = 0;
    if (grid[i][j] == 1) {
        for (auto x: mov_king) {
            ans += DP(i+x.first, j+x.second, dp, grid, n, m);
        }
    }
    else{
        for (auto x: mov_knight) {
            ans += DP(i+x.first, j+x.second, dp, grid, n, m);
        }
    }
    return dp[i][j] = ans;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        VVI dp(n, VI(m, -1)), grid(n, VI(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char c;
                cin >> c;
                if (c == 'K') grid[i][j] = 1;
                else if (c == 'N') grid[i][j] = 2;
            }
        }
        cout << DP(n-1, m-1, dp, grid, n, m) << endl;
    }
}