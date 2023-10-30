#include <iostream>
#include <vector>

using namespace std;

int best = 0;

void bt (int i,const vector<vector<int>>& cost, vector<int>& id, int sum, vector<bool>& seen) {
    int n = id.size();
    best = max(best, sum);
    for (int j = 0; j < n; ++j) {
        if (!seen[j]) {
            seen[j] = true;
            id[i] = j;
            bt(i+1, cost, id, sum+cost[id[i-1]][j], seen);
            seen[j] = false;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> cost(n, vector<int>(n));
    vector<int> id (n);
    vector<bool> seen(n, false);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> cost[i][j];
    }
    int x;
    cin >> x;
    id[0] = x;
    seen[x] = true;
    bt(1, cost, id, 0, seen);
    cout << best << '\n';
}