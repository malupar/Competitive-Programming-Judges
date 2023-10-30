#include <iostream>
#include <set>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n, k, x;
    cin >> k >> n;
    map<int,int> mp;
    set<int> posr, posl;
    mp[-k]++;
    posl.insert(0);
    posr.insert(k);
    while(n--){
        cin >> x;
        auto f = posl.upper_bound(-x), s = posr.upper_bound(x);
        posl.insert(-x);
        posr.insert(x);
        mp[-*s-*f]--;
        if(!mp[-*f-*s]) mp.erase(-*f-*s);
        mp[-*f-x]++;mp[x-*s]++;
        for(auto y:mp){
            cout << -y.first << ' ';
            break;
        }
    }
}