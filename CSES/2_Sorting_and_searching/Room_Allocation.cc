#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    int n, a, b, cnt=0;
    cin >> n;
    vector<int> ans(n);
    priority_queue<pair<int,pair<int,int>>> pq;
    queue<int> av;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        pq.push({-a,{1,i}});
        pq.push({-b,{0,i}});
    }
    while(!pq.empty()){
        if(!pq.top().second.first){
            av.push(ans[pq.top().second.second]);
        }else{
            if(av.empty()){
                cnt++;
                ans[pq.top().second.second] = cnt;
            }else{
                ans[pq.top().second.second] = av.front();
                av.pop();
            }
        }
        pq.pop();
    }
    cout << cnt << '\n';
    for(int i = 0; i < n; i++)
        cout << ans[i] << ' ';
}