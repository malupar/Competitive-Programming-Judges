#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for(int& u:a) cin >> u;
    int i = 0, j = 0, ans = 0, cont = 0;
    for(i = 0; i < n; i++){
        while(j < n && ans < t){
            ans += a[j];
            j++;
        }
        if(ans == t)cont++;
        ans -= a[i];
    }
    cout << cont << '\n';
}