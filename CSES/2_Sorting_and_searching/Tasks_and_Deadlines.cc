#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
#define pii pair<int,int>
bool cmp(pii a,pii b){
    return (a.second-a.first+b.second-(a.first+b.first)>b.second-b.first+a.second-(a.first+b.first));
}
signed main(){
    int n, ans=0, last=0;
    cin >> n;
    vector<pii> v(n);
    for(auto& i:v) cin >> i.first >> i.second;
    sort(v.begin(),v.end(),cmp);
    for(int i = 0; i < n; i++){
        last += v[i].first;
        ans += v[i].second-last;
    }
    cout << ans << endl;
}