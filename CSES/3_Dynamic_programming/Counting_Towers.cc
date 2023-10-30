#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9+7;
vector<pair<long long,long long>> dp(1e6+2);
int main(){
    int t, n;
    dp[0] = {1, 1};
    for(int i = 1; i < 1e6+2; i++){
        dp[i].first = (dp[i-1].first*4 + dp[i-1].second)%mod;
        dp[i].second = (dp[i-1].first + dp[i-1].second*2)%mod;
    }
    cin >> t;
    while(t--){
        cin >> n;
        n--;
        cout << (dp[n].first + dp[n].second)%mod << '\n';
    }
}