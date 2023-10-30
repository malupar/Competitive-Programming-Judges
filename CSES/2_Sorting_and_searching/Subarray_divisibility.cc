#include <iostream>
#include <map>
using namespace std;
int main(){
    long long n, x, y, sum=0, ans=0;
    cin >> n;
    map<long long,int> mp;
    mp[0] = 1;
    for(int i = 0; i < n; i++){
        cin >> y;
        sum += y;
        sum %= n;
        if(sum < 0) sum += n;
        ans += mp[sum];
        mp[sum]++;
    }
    cout << ans << '\n';
}