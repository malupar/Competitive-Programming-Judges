#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    int ans = 1;
    for(int i = 0; i < n && v[i] <= ans; i++)
        ans += v[i];
    cout << ans << endl;
}