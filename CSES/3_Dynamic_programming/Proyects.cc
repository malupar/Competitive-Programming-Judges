#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long

signed main(){
    int n;
    cin >> n;
    vector<pair<pair<int,int>,int>> v(n);
    vector<int> dp(2*n+1), id(n,-1);
    vector<pair<pair<int,int>,int>> a;
    dp[0] = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i].first.first >> v[i].first.second >> v[i].second;
        a.push_back({{v[i].first.first,0},i});
        a.push_back({{v[i].first.second,1},i});
    }
    sort(a.begin(),a.end());
    for(int i = 0; i < 2*n; i++){
        dp[i+1] = dp[i];
        if(id[a[i].second] == -1) id[a[i].second] = i;
        else dp[i+1] = max(dp[i+1], dp[id[a[i].second]] + v[a[i].second].second);
    }
    cout << dp[2*n] << '\n';
}