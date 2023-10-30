#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int n, x, m;
    cin >> n >> m;
    multiset<int> s;
    for(int i = 0; i < n; i++){
        cin >> x;
        s.insert(-x);
    }
    while(m--){
        cin >> x;
        auto y = s.lower_bound(-x);
        if(y == s.end()) cout << -1 << '\n';
        else {
            cout << *y*-1 << '\n';
            s.erase(y);
        }
    }
}