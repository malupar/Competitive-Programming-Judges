#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    int n,m,x,y;
    while(cin>>n>>m){
        vector<vector<int>> g(n,vector<int>());
        vector<int> par(n,-1),dist(n);
        while(m--){
            cin>>x>>y;
            g[y].push_back(x);
        }
        queue<int> q;
        q.push(n-1);
        par[n-1]=0;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int v:g[u]){
                if(par[v]==-1){
                    par[v]=u;
                    dist[v]=dist[u]+1;
                    q.push(v);
                }else if(dist[v]==dist[u]+1&&par[v]>u)par[v]=u;
            }
        }
        par[n-1]=-1;
        int u=0;
        //cout<<u<<' ';
        vector<int> ans;
        while(u!=-1){
            ans.push_back(u);
            u=par[u];
            //cout<<u<<' ';
        }
        for(int i=0;i<ans.size();i++){
            if(i)cout<<' ';
            cout<<ans[i];
        }
        cout<<'\n';
    }
}
