#include <iostream>
#include <vector>
using namespace std;
bool dfs(int a,vector<vector<int>>& g,vector<int>& seen){
    for(int x:g[a]){
        if(seen[x]==-1){
            seen[x]=1-seen[a];
            if(!dfs(x,g,seen))return false;
        }
        if(seen[x]==seen[a])return false;
    }
    return true;
}
int main(){
    int n,m,x,y;
    while(cin>>n>>m){
    vector<vector<int>> g(n,vector<int>());
    vector<int> seen(n,-1);
    while(m--){
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bool ok=true;
    for(int i=0;i<n;i++)if(seen[i]==-1){
        seen[i]=0;
        if(!dfs(i,g,seen))ok=false;
    }
    cout<<(ok ? "SI\n":"NO\n");
    }
}
