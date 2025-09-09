#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<set<int>> g(n, set<int>());
    vector<set<int>> g2(n, set<int>());
    vector<int> in(n), out(n);
    bool ok = true;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        --x;--y;
        out[x]++;
        in[y]++;
        g[x].insert(y);
        g2[x].insert(y);
    }

    for (int i = 1; i < n-1; ++i) if (in[i] != out[i]) ok = false;

    if (!g[0].size() || !ok) {
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    vector<int> ans;
    stack<int> s;
    s.push(0);
    while (!s.empty()) {
        int cur = s.top();
        if (g[cur].empty()) {
            if (!ans.empty() && g2[cur].find(ans.back()) == g2[cur].end())
                ok = false;
            ans.push_back(cur);
            s.pop();
        }
        else {
            int to = *g[cur].begin();
            s.push(to);
            g[cur].erase(to);
        }
    }

    reverse(ans.begin(), ans.end());

    if (ans.size() != m+1 || ans.back() != n-1 || !ok) cout << "IMPOSSIBLE";
    else
        for (int x: ans) cout << x+1 << ' ';
    cout << '\n';
}