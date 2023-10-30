#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define pii pair<int,int>

signed main() {
    int n,x;
    cin >> n >> x;
    pii dp[1<<n];
    vector<int> v(n);
    for(int& i : v) cin >> i;
    dp[0] = {0,1};
    for(int i = 1; i < (1<<n); i++){
        pii ma = {1e18,1e18};
        for(int j = 0; j < n; j++){
            if(!(i&(1<<j))) continue;
            pii b = dp[i^(1<<j)];
            if(b.first+v[j] <= x) b.first += v[j];
            else {
                b.first = v[j];
                b.second++;
            }
            if(b.second < ma.second || (b.second == ma.second && b.first < ma.first))
                ma = b;
        }
        dp[i] = ma;
    }
    cout << dp[(1<<n)-1].second << '\n';
}

