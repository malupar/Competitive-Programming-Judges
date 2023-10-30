#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n, ans=0, x;
    cin >> n;
    multiset<int> s;
    for(int i = 0; i < n; i++){
        cin >> x;
        auto it = s.upper_bound(x);
        if(it == s.end()){
            s.insert(x);
            ans++;
        }
        else {
            s.insert(x);
            if(s.end() != it) s.erase(it);
        }
    }
    cout << ans << endl;
}