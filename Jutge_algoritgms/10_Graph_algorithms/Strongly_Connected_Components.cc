#include <iostream>
#include <vector>
#include <stack>
#include <map>
using namespace std;

stack<int> st;
void dfs(int u, vector<vector<int>>& g, vector<int>& seen) {
    seen[u] = 1;
    for (int v: g[u]) {
        if (!seen[v]) {
            dfs(v, g, seen);
        }
    }
    st.push(u);
}

void dfs(int u, vector<vector<int>>& g, vector<int>& seen, int c) {
    seen[u] = c;
    for (int v: g[u]) {
        if (!seen[v]) {
            dfs(v, g, seen, c);
        }
    }
}

int SCC(vector<vector<int>>& g, vector<vector<int>>& g2) {
    int n = g.size();
    vector<int> seen(n, 0), seen2(n, 0);
    for (int i = 0; i < n; ++i) {
        if (!seen[i]) dfs(i, g, seen);
    }
    int cnt = 0;
    while (st.size()) {
        if (!seen2[st.top()]) dfs(st.top(), g2, seen2, ++cnt);
        st.pop();
    }
    return cnt;
}

int main() {
    int test;
    cin >> test;
    for (int tes = 0; tes < test; ++tes) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> g(n, vector<int>()), g2(n, vector<int>());
        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g2[v].push_back(u);
        }
        int ans = SCC(g, g2);
        cout << "Graph #" << tes+1 << " has " << ans << " strongly connected component(s)." <<endl;
    }
}