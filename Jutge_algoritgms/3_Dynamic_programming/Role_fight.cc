#include <bits/stdc++.h>
using namespace std;
const int max_n = 31;
bool dp[max_n][max_n][max_n][max_n][2];
int seen[max_n][max_n][max_n][max_n][2];
int max_m[2];
int cur_party = 1;
pair<int,int> ab[2][50];
int n[2];
bool cmp1(pair<int,int>& a, pair<int,int>& b) {
    if (a.first == b.first) return  a.second > b.second;
    return a.first < b.first;
}

bool DP(int h1, int h2, int m1, int m2, bool turn) {
    if (h1 <= 0) return 1-turn;
    if (seen[h1][h2][m1][m2][turn] == cur_party) return dp[h1][h2][m1][m2][turn];
    seen[h1][h2][m1][m2][turn] = cur_party;

    if (DP(h2-1, h1, m2, min(m1+5, max_m[turn]), 1-turn) == turn)
        return dp[h1][h2][m1][m2][turn] = turn;

    for (int i = 0; i < n[turn]; ++i) {
        if (m1 >= ab[turn][i].first) {
            if (DP(h2-ab[turn][i].second, h1, m2, m1-ab[turn][i].first, 1-turn) == turn) {
                return dp[h1][h2][m1][m2][turn] = turn;
            }
        }
        else break;
    }
    return 1-turn;
}

bool comp2(pair<int,int>& a, pair<int,int>& b) {
    return a.second >= b.second;
}

int main() {
    string s1, s2;
    int h1, h2, m1, m2;
    for (int i = 0; i < max_n; ++i) {
        for (int j = 0; j < max_n; ++j) {
            for (int k = 0; k < max_n; ++k) {
                for (int k2 = 0; k2 < max_n; ++k2) {
                    seen[i][j][k][k2][0] = seen[i][j][k][k2][1] = 0;
                }
            }
        }
    }
    while (cin >> s1 >> h1 >> m1 >> s2 >> h2 >> m2) {
        cin >> n[0];
        for (int i = 0; i < n[0]; ++i) {
            cin >> ab[0][i].second;
        }
        for (int i = 0; i < n[0]; ++i) {
            cin >> ab[0][i].first;
        }
        cin >> n[1];
        for (int i = 0; i < n[1]; ++i) {
            cin >> ab[1][i].second;
        }
        for (int i = 0; i < n[1]; ++i) {
            cin >> ab[1][i].first;
        }
        max_m[0] = m1, max_m[1] = m2;
        sort(ab[0], ab[0]+n[0], cmp1);
        sort(ab[1], ab[1]+n[1], cmp1);
        n[0] = distance(ab[0], unique(ab[0], ab[0] + n[0], comp2));
        n[1] = distance(ab[1], unique(ab[1], ab[1] + n[1], comp2));
        ++cur_party;
        if (DP(h1, h2, m1, m2, 0)) cout << s2 << endl;
        else cout << s1 << endl;
    }
}