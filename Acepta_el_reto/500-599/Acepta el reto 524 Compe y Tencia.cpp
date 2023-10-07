#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,c,t,ans;
    while(cin>>n){
        if(!n)break;
        cin>>c>>t;
        ans=0;
        vector<pair<int,pair<int,int>>>cost(n);
        for(auto& i:cost)cin>>i.second.first;
        for(auto& i:cost){
            cin>>i.second.second;
            i.first=i.second.first-i.second.second;
        }
        sort(cost.begin(),cost.end());
        //for(int i=0;i<n;i++)cout<<cost[i].first<<' '<<cost[i].second<<'\n';
        for(int i=0;i<c;i++){
            ans+=cost[i].second.first;
            //cout<<ans<<' ';
        }
        for(int i=n-1;i>=n-t;i--){
            ans+=cost[i].second.second;
            //cout<<ans<<' ';
        }
        for(int i=c;i<n-t;i++)ans+=min(cost[i].second.first,cost[i].second.second);
        cout<<ans<<'\n';
    }
}
