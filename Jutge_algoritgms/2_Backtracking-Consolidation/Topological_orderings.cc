#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;

void bt(int i, int n, VVI& g, VVI& ng, VI& used, VI& cur, VI& available) {
    if (i == n) {
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << cur[i];
        }
        cout << endl;
        return;
    }
    for (int x: available) {
        
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>());
    vector<vector<int>> ng(n, vector<int>());
    VI used(n), cur;
    while (m--) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        ng[y].push_back(x);
    }
    for (int i = 0; i < n; ++i) {
        sort(g[i].begin(), g[i].end());
        sort(ng[i].begin(), ng[i].end());
    }
    bt(0, n, g, ng, used, cur);
}
