#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void topsort(vector<vector<int>>& g){
    int n=g.size();
    vector<int> cnt(n),depth(n),ways(n);
    for(int i=0;i<n;i++)for(int x:g[i])cnt[x]++;
    queue<int> q;
    for(int i=0;i<n;i++)if(!cnt[i]){
        q.push(i);
        depth[i]=0;
        ways[i]=1;
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:g[u]){
            cnt[v]--;
            if(depth[u]+1>depth[v]){
                depth[v]=depth[u]+1;
                ways[v]=ways[u];
            }else if(depth[u]+1==depth[v])ways[v]+=ways[u];
            if(!cnt[v]){
                q.push(v);
            }
        }
    }
    int ans=0,sol=0;
    for(int i=0;i<n;i++){
        if(depth[i]>ans){
            ans=depth[i];
            sol=ways[i];
        }else if(depth[i]==ans){
            sol+=ways[i];
        }
    }
    cout<<ans+1<<' '<<sol<<'\n';
}
int main(){
    int n,m,x,y,w,a,b;
    while(cin>>n>>m){
        vector<vector<int>> g(n,vector<int>());
        while(m--){
            cin>>x>>y;
            g[x].push_back(y);
        }
        topsort(g);
    }
}