#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int& i: v) cin >> i;
    v.push_back(0);
    multiset<int> pq, qp;
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < k; ++i) {
        pq.insert(-v[i]);
        sum1 += v[i];
    }
    for (int j = k; j <= n; ++j) {
        if (pq.size() && qp.size() && -*pq.begin() > *qp.begin()) {
            qp.insert(-*pq.begin());
            sum1 += *pq.begin();
            sum2 -= *pq.begin();
            pq.erase(pq.begin());
        }
        while (pq.size() > qp.size()) {
            qp.insert(-*pq.begin());
            sum1 += *pq.begin();
            sum2 -= *pq.begin();
            pq.erase(pq.begin());
        }
        while (pq.size()+1 < qp.size()) {
            pq.insert(-*qp.begin());
            sum1 += *qp.begin();
            sum2 -= *qp.begin();
            qp.erase(qp.begin());
        }
        int mediana = *qp.begin();
        long long cost = 1ll*mediana*qp.size() - sum2 + sum1-1ll*mediana*pq.size();
        cout << -cost << ' ';
        if (qp.find(v[j-k]) != qp.end()) {
            sum2 -= v[j-k];
            qp.erase(qp.find(v[j-k]));
        } else {
            sum1 -= v[j-k];
            pq.erase(pq.find(-v[j-k]));
        }
        pq.insert(-v[j]);
        sum1 += v[j];
    }
    cout << '\n';
}