#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <unordered_set>
#include <set>
#include <unordered_map>
using namespace std;
 
int frec(vector<int>& r, vector<int>& dp, int& w, int sum){
    if (sum < 0) return 1e9;
    if (dp[sum] != -1) return dp[sum];
 
    int b = 1e9;
    for(int i=r.size() - 1; i>-1; i--){
        if (!r[i]) continue;
        int g = frec(r, dp, i, sum-r[i]);
        b = min(b, g + 1);
    }
 
    return dp[sum] = b;
}
 
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> r(n);
    vector<int> dp (x+1, -1);
    dp[0] = 0;
    bool b = true;
    for(int i=0; i<n; i++){
        int s;
        cin >> s;
        if(s <= x)
            r[i] = s;
    }
    sort(r.begin(), r.end());
    int w = n-1;
    int res = frec(r, dp, w, x);
    if (res == 1e9) cout << -1;
    else cout << res;
}