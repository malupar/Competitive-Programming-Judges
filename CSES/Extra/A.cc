#include <iostream>
#include <vector>
#include <set>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> cnt(n), par(n-2);
    set<int> s;
    for (int i = 0; i < n-2; ++i) {
        int x;
        cin >> x;
        --x;
        cnt[x]++;
        par[i] = x;
    }
    for (int i = 0; i < n; ++i) {
        if (!cnt[i]) s.insert(i);
    }
    vector<pair<int,int>> edges;
    if (par[n-3] == n-1) edges.push_back({par[n-3], n-2});
    else edges.push_back({par[n-3], n-1});
    for (int i = 0; i < n-2; ++i) {
        auto it = s.begin();
        edges.push_back({par[i], *it});
        s.erase(it);
        cnt[par[i]]--;
        if (!cnt[par[i]])s.insert(par[i]);
    }
    for (auto x: edges) cout << x.first+1 << ' ' << x.second+1 << '\n';
}