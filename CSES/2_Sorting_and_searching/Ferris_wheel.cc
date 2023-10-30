#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int n, x, m, ans=0;
    cin >> n >> m;
    m *= -1;
    multiset<int> s;
    for(int i = 0; i < n; i++){
        cin >> x;
        s.insert(-x);
    }
    while(!s.empty()){
        auto x = s.begin();
        int k = *x;
        s.erase(x);
        auto y = s.lower_bound(m-k);
        ans++;
        if(y != s.end()){
            s.erase(y);
        }
    }
    cout << ans;
}