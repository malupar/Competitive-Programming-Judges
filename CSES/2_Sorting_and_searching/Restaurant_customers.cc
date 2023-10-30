#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define pii pair<int,int>
int main(){
    int n, ans=0, sol=0, x, y;
    cin >> n;
    priority_queue<pii> q;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        q.push({-x, 1});
        q.push({-y, 0});
    }
    while(!q.empty()){
        if(q.top().second) ans++;
        else ans--;
        sol = max(sol,ans);
        q.pop();
    }
    cout << sol;
}