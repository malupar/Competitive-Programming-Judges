#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxN = 1e6+2;

ll vals[maxN];

int num(ll x, int r) {
    if (!x) return 0;
    int l = 0, ans = -1;
    while (l <= r) {
        int mid = (r+l)/2;
        if (vals[mid] > x) {
            r = mid-1;
        } else {
            l = mid+1;
            ans = mid;
        }
    }
    return 1+num(x-vals[ans], ans);
}

int main() {
    for (int i = 0; i < maxN; ++i) {
        vals[i] = 1ll*i*(i+1)/2;
    }

    int t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        cout << num(x, maxN-1) << '\n';
    }
}