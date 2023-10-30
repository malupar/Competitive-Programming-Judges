#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int max_n = 30;
bool dp[max_n][max_n][max_n+1][max_n+1][2];
bool seen[max_n][max_n][max_n][max_n][2];
int max_m[2];
bool DP(int h1, int h2, int m1, int m2, bool turn, vector<pair<int,int>>& ab1, vector<pair<int,int>>& ab2) {
    if (h1 < 0) return 1-turn;
    if (seen[h1][h2][m1][m2][turn]) return dp[h1][h2][m1][m2][turn];
    seen[h1][h2][m1][m2][turn] = 1;
    for (int i = 0; i < ab1.size(); ++i) {
        if (m1 >= ab1[i].first) {
            if (DP(h2-ab1[i].second, h1, m2, m1-ab1[i].first, 1-turn, ab2, ab1) == turn) {
                return dp[h1][h2][m1][m2][turn] = turn;
            }
        }
    }
    return dp[h1][h2][m1][m2][turn] = DP(h2-1, h1, m2, min(m1+5, max_m[turn]), 1-turn, ab2, ab1);
}

int main() {
    string s1, s2;
    int h1, h2, m1, m2;
    while (cin >> s1 >> h1 >> m1 >> s2 >> h2 >> m2) {
        int n1, n2;
        cin >> n1;
        vector<pair<int,int>> abilities1(n1);
        for (auto& i: abilities1) cin >> i.second;
        for (auto& i: abilities1) cin >> i.first;
        cin >> n2;
        vector<pair<int,int>> abilities2(n2);
        for (auto& i: abilities2) cin >> i.second;
        for (auto& i: abilities2) cin >> i.first;
        max_m[0] = m1, max_m[1] = m2;

        for (int i = 0; i < h1; ++i) {
            for (int j = 1; j < h2; ++j) {
                for (int i2 = 0; i2 <= m1; ++i2) {
                    for (int j2 = 0; j2 <= m2; ++j2) {
                        seen[i][j][i2][j2][0] = seen[i][j][i2][j2][1] = 0;
                    }
                }
            }
        }

        if (DP(h1, h2, m1, m2, 0, abilities1, abilities2)) cout << s2 << endl;
        else cout << s1 << endl;
    }
}