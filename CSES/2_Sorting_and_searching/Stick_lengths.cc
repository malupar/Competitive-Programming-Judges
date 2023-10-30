#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long n, ans=0;
    cin >> n;
    vector<int> v(n);
    for(int& i:v) cin >> i;
    sort(v.begin(),v.end());
    for(int i = 0; i < n; i++) 
        ans += max(v[i]-v[n/2],v[n/2]-v[i]);
    cout << ans << endl;
}