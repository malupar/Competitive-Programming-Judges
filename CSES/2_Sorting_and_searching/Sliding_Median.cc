#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    multiset<int> lb, ub;
    vector<int> v(n);
    for(int& i:v) cin >> i;
    for(int i = 0; i < k; i++){
        ub.insert(v[i]);
    }
    while(ub.size() > lb.size()){
        auto it = ub.begin();
        lb.insert(-*it);
        ub.erase(ub.begin());
    }
    for(int i = k; i < n; i++){
        auto it = lb.begin();
        cout << -*it << ' ';
        ub.insert(v[i]);
        if(-*it < v[i-k])
            ub.erase(ub.find(v[i-k]));
        else
            lb.erase(lb.find(-v[i-k]));
        if(lb.size()){
            auto it = lb.begin();
            ub.insert(-*it);
            lb.erase(it);
        }
        while(ub.size() > lb.size()){
            auto it = ub.begin();
            lb.insert(-*it);
            ub.erase(it);
        }
    }
    auto it = lb.begin();
    cout << -*it << ' ';
}