#include <iostream>
#include <vector>
using namespace std;

#define int long long

vector<vector<int>> dp(100001, vector<int>(101,-1));
const int mod = 1e9+7;
int Dp(int a,int x,vector<int>& v,int k){
    if(!x || x > k || (v[a] != x && !v[a]))return 0;
    if(a == 0)return dp[a][x] = 1;
    if(dp[a][x] != -1)return dp[a][x];
    return dp[a][x] = (Dp(a-1,x-1,v,k) + Dp(a-1,x,v,k) + Dp(a-1,x+1,v,k))%mod;
}
signed main(){
    int n, x, ans = 0;
    cin >> n >> x;
    vector<int> v(n);
    for(int& i : v) cin >> i;
    if(v[n-1] != 0) ans += Dp(n-1,v[n-1], v, x);
    else for(int i = 1; i <= x; i++) ans += Dp(n-1,i,v,x);
    cout << ans%mod << '\n';
}