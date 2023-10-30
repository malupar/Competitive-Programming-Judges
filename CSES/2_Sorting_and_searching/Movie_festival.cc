#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    vector<int> dp(2*n+1), id(n,-1);
    vector<pair<pair<int,int>,int>>a;
    dp[0] = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
        a.push_back({{v[i].first,1},i});
        a.push_back({{v[i].second,0},i});
    }
    sort(a.begin(),a.end());
    for(int i = 0; i < 2*n; i++){
        dp[i+1] = dp[i];
        if(id[a[i].second] == -1) id[a[i].second] = i;
        else dp[i+1] = max(dp[i+1], dp[id[a[i].second]]+1);
        //cout<<dp[i+1]<<' ';
    }
    cout << dp[2*n];
}