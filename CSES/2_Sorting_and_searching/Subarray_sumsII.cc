#include <iostream>
#include <map>
using namespace std;
int main(){
    long long n, x, y, sum=0, ans=0;
    cin >> n >> x;
    map<long long,int> mp;
    mp[0] = 1;
    while(n--){
        cin >> y;
        sum += y;
        ans += mp[sum-x];
        mp[sum]++;
    }
    cout << ans << '\n';
}