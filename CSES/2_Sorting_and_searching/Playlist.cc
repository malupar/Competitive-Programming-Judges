#include <iostream>
#include <map>
using namespace std;
int main(){
    int n, ans=0, x, j=0;
    cin >> n;
    map<int,int> m;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(m.find(x) != m.end())
            j = max(j, m[x]+1);
        ans = max(ans,i-j+1);
        m[x] = i;
    }
    cout << ans << endl;
}