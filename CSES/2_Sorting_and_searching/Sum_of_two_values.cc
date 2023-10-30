#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for(int& i: v) cin >> i;
    map<int,int> mp;
    for (int i = 0; i < n; ++i) {
        if (mp.find(s-v[i]) != mp.end()) {
            cout << mp[s-v[i]]+1 << ' ' << i+1 << '\n';
            return 0;
        }
        mp[v[i]] = i;
    }
    cout << "IMPOSSIBLE\n";
}