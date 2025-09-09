#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> movies(n);
    sort(movies.begin(), movies.end(), cmp);
    multiset<int> s;
    for (int i = 0; i < k; ++i) s.insert(-1);
}