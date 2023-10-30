#include <iostream>
#include <vector>

using namespace std;

void bt (int i,const vector<vector<int>>& cost, vector<int>& id, int sum, vector<bool>& seen) {
    int n = id.size();
    if (i == n and cost[id[n-1]][0]) {
        sum += cost[id[n-1]][0];
        for (int i = 0; i < n; ++i)
            cout << id[i] << ' ';
        cout << "0 (" << sum << ")\n";
    }
    else {
        for (int j = 1; j < n; ++j) {
            if (!seen[j] and cost[id[i-1]][j]) {
                seen[j] = true;
                id[i] = j;
                bt(i+1, cost, id, sum+cost[id[i-1]][j], seen);
                seen[j] = false;
            }
        }
    }
}

int main() {
    int n;
    while (cin >> n) {
        vector<vector<int>> cost(n, vector<int>(n));
        vector<int> id (n);
        vector<bool> seen(n, false);
        seen[0] = true;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) cin >> cost[i][j];
        }

        bt(1, cost, id, 0, seen);
        cout << "--------------------\n";
    }
}