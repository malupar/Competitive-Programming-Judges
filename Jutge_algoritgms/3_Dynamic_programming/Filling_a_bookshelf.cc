#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
    int n;
    while (cin >> n) {
        if (!n) break;
        vector<int> h(n), w(n);
        for (int i = 0; i < n; ++i) cin >> w[i] >> h[i];
        ll ans = 0;
        vector<ll> dp_up(n), dp_down(n);
        for (int i = 0; i < n; ++i) {
            dp_up[i] = w[i];
            for (int j = 0; j < i; ++j) {
                if (h[i] > h[j]) dp_up[i] = max(dp_up[i], dp_down[j]+w[i]);
                else if (h[i] < h[j]) dp_down[i] = max(dp_down[i], dp_up[j]+w[i]);
            }
            ans = max(ans, dp_up[i]);
        }
        cout << ans << endl;
    }
}