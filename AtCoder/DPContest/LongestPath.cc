#include <bits/stdc++.h>
using namespace std;

void topoDP(vector<vector<int>>& g) {
    int n = g.size();
    vector<int> dp(n), cnt(n);
    int ans = 0;

}

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> g(N, vector<int>());
    while (M--) {
        int x, y;
        cin >> x >> y;
        --x;--y;
        g[x].push_back(y);
    }
}