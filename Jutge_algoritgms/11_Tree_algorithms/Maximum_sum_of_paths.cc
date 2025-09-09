#include <bits/stdc++.h>
using namespace std;

void dfs(int curNodo, vector<vector<pair<int,int>>>& g, int par) {
    for (auto v: g[curNodo]) {
        if (v.first == par) continue;
    }
}

int main() {
    int n;
    while (cin >> n) {
        vector<vector<pair<int,int>>> g(n, vector<pair<int,int>>());
        for (int i = 1; i < n; ++i) {
            int x, y, w;
            cin >> x >> y >> w;
            g[x].push_back({y, w});
            g[y].push_back({x, w});
        }
    }
}