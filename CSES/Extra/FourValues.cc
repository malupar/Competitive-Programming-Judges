#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for(int& i: v) cin >> i;
    map<int,vector<pair<int,int>>> mp;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            for (auto x: mp[s-(v[i]+v[j])]) {
                if (x.second != i+1 && x.second != j+1 && x.first != i+1 && x.first != j+1) {
                cout << i+1 << ' ' << j+1 << ' ' << x.first << ' ' << x.second << '\n';
                return 0;
                }
            }
            mp[v[i]+v[j]].push_back({i+1, j+1});
        }
    }
    cout << "IMPOSSIBLE\n";
}