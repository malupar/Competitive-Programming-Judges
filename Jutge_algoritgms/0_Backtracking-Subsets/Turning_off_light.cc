#include <iostream>
#include <vector>

using namespace std;

int ans;

void bt (int i, int j, vector<vector<int>>& grid, int swit) {
    int n = grid.size(), m = grid[0].size();
    if (i == n) {
        bool ok = true;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (grid[i][j] == 1) ok = false;
        if (ok) ans = min (ans, swit);
    }
    else {
        if (not (i > 0 and j > 0 and grid[i-1][j-1] == 0)) {
            //if (j == m-1 and i > 0 and grid[i-1][j] == 1)
            for (int x = -1; x <= 1; ++x) {
                for (int y = -1; y <= 1; ++y) {
                    if (i+x >= 0 and i+x < n)
                        if (j+y >= 0 and j+y < m)
                            grid[i+x][j+y] = 1 - grid[i+x][j+y];
                }
            }
            if (j+1 == m) {
                if (i > 0) {
                    bt (i+1, 0, grid, swit+1);
                }
                else bt (1+i, 0, grid, swit+1);
            }
            else bt (i, j+1, grid, swit+1);
            for (int x = -1; x <= 1; ++x) {
                for (int y = -1; y <= 1; ++y) {
                    if (i+x >= 0 and i+x < n)
                        if (j+y >= 0 and j+y < m)
                            grid[i+x][j+y] = 1 - grid[i+x][j+y];
                }
            }
        }
        if (j+1 == m) {
            if (i > 0 and grid[i-1][j] == 1) return;
            bt (i+1, 0, grid, swit);
        }
        else {
            if (i > 0 and j > 0 and grid[i-1][j-1] == 1) return;
            bt (i, j+1, grid, swit);
        }
    }
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        ans = 1e9;
        vector<vector<int>> grid (n, vector<int>(m));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                char c;
                cin  >> c;
                if (c == '.') grid[i][j] = 0;
                else grid[i][j] = 1;
            }
        bt (0,0,grid, 0);
        if (ans == 1e9) cout << "no\n";
        else cout << ans << '\n';
    }
}