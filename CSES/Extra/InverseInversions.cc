#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    int l = 1, r = n;
    for (int i = 0; i < n; ++i) {
        if (k >= r-l) {
            k -= (r-l);
            cout << r << ' ';
            --r;
        } else {
            cout << l << ' ';
            l++;
        }
    }
    cout << '\n';
}