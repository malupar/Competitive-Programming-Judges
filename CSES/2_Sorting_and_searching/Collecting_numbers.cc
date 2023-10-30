#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, x, ans=1;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> x;
        v[x-1] = i;
    }
    for(int i = 1; i < n; i++)
        if(v[i] < v[i-1]) ans++;
    cout << ans << endl;
}