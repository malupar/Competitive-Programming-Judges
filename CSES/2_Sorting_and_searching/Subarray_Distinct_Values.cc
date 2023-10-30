#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    long long n, k, ans=0, sol=0;
    cin >> n >> k;
    vector<int> v(n);
    for(int& u:v)cin >> u;
    int i = 0, j = 0;
    map<int,int> m;
    for(;i < n; i++){
        while(ans <= k && j < n){
            m[v[j]]++;
            if(m[v[j]] == 1)ans++;
            if(ans > k){
                m[v[j]]--;
                ans--;
                break;
            }
            j++;
        }
 
        sol += j-i;
        m[v[i]]--;
        if(!m[v[i]])ans--;
    }
    cout << sol << '\n';
}