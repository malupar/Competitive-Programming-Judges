#include <iostream>
#include <vector>
using namespace std;
void dfs(int u,vector<vector<int> >& v,vector<int>& cont,vector<char>& grid){
    grid[u]=cont[u]+'0';
    for(int k:v[u]){
        if(grid[k]=='-')dfs(k,v,cont,grid);
    }
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n,m,q,x,y;
    while(cin>>n>>m){
    vector<char> grid(n*m);
    vector<int> cont(n*m,0);
    vector<vector<int> >v(n*m,vector<int>());
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i*m+j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i&&grid[i*m+j-m]=='*')cont[i*m+j]++;
            if(i&&j&&grid[i*m+j-1-m]=='*')cont[i*m+j]++;
            if(j&&grid[i*m+j-1]=='*')cont[i*m+j]++;
            if(i<n-1&&j&&grid[(i+1)*m+j-1]=='*')cont[i*m+j]++;
            if(i<n-1&&grid[(i+1)*m+j]=='*')cont[i*m+j]++;
            if(j<m-1&&grid[i*m+j+1]=='*')cont[i*m+j]++;
            if(i<n-1&&j<m-1&&grid[(i+1)*m+j+1]=='*')cont[i*m+j]++;
            if(i&&j<m-1&&grid[(i-1)*m+j+1]=='*')cont[i*m+j]++;
            if(!cont[i*m+j]){
                if(i)v[i*m+j].push_back(i*m+j-m);
                if(j)v[i*m+j].push_back(i*m+j-1);
                if(i&&j)v[i*m+j].push_back(i*m+j-m-1);
                if(i<n-1)v[i*m+j].push_back(i*m+j+m);
                if(j<m-1)v[i*m+j].push_back(i*m+j+1);
                if(i<n-1&&j<m-1)v[i*m+j].push_back(i*m+j+1+m);
                if(i&&j<m-1)v[i*m+j].push_back(i*m+j-m+1);
                if(i<n-1&&j)v[i*m+j].push_back(i*m+j+m-1);
            }
        }
    }
    cin>>q;
    bool stop=false;
    while(q--){
        cin>>x>>y;
        x--;y--;
        if(!stop&&grid[x*m+y]=='*'){
            cout<<"GAME OVER\n";
            stop=true;
        }
        dfs(x*m+y,v,cont,grid);
    }
    if(stop)continue;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                if(grid[i*m+j]=='0')cout<<'-';
                else if(grid[i*m+j]>'9'||grid[i*m+j]<'0')cout<<'X';
                else cout<<grid[i*m+j];
        }
        cout<<'\n';
    }
    }
}
