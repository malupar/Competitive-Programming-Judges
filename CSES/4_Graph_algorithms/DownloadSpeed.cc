#include <iostream>
#include <vector>
#include <queue>
 
using namespace std;
#define int long long
struct Flow {
    int v, c, flow, next;
};
const int INF = 1e18;
vector<vector<int>> adj;
vector<int> l, w, head;
vector<Flow> edges;
int cnt = 0;
bool bfs(int s, int t) {
    int n = l.size();
    for (int i = 0; i < n; ++i) l[i] = -1;
    l[s] = 0;
    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int id = head[u]; id != -1; id = edges[id].next) {
            if (l[edges[id].v]!=-1)
                continue;
            if (edges[id].flow < edges[id].c) {
                l[edges[id].v] = l[u]+1;
                q.push(edges[id].v);
            }
        }
    }
    return l[t] != -1;
}
int dfs (int u, int t, int f) {
    if (u == t) return f;
    for (int i = w[u]; i != -1; i = edges[i].next) {
        if (edges[i].flow < edges[i].c&&l[u]+1 == l[edges[i].v]) {
            int min_f = dfs(edges[i].v, t, min(f,edges[i].c-edges[i].flow));
            if (min_f > 0) {
                edges[i].flow += min_f;
                edges[i^1].flow -= min_f;
                return min_f;
            }
        }
    }
    return 0;
}
int Dinic(int s, int t) {
    int ans = 0;
    while (bfs(s, t)) {
        w = head;
        while(true) {
            int f = dfs(s, t, INF);
            if (!f) break;
            ans += f;
        }
    }
    return ans;
}
void add_edge(int u, int v, int c) {
    edges[cnt] = {v, c, 0, head[u]};
    head[u] = cnt++;
    edges[cnt] = {u, 0, 0, head[v]};
    head[v] = cnt++;
}
signed main() {
    int n, m;
    cin >> n >> m;
    edges = vector<Flow> (m*2);
    head = vector<int> (n, -1);
    l = vector<int> (n);
    for (int i = 0; i < m; ++i) {
        int x, y, w;
        cin >> x >> y >> w;
        --x; --y;
        add_edge(x, y, w);
    }
    cout << Dinic(0, n-1) << '\n';
}