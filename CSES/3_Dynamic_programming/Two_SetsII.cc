#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define pii pair<int,int>

signed main() {
    int n, mod = 2*(1e9+7);
    cin >> n;
    if(n*(n+1)%4 != 0) cout << 0 << '\n';
    else {
        int k = n*(n+1)/4;
        vector<pii> dp(k+1,{0,0});
        dp[0] = {1,1};
        for(int i = 1; i <= n; i++){
            for(int j = k-i; j >= 0; j--){
                if(dp[j].second){
                    dp[j+i].second = 1;
                    dp[i+j].first = (dp[i+j].first + dp[j].first)%mod;
                }
            }
        }
        cout << (dp[k].first/2)%mod << '\n';
    }
}