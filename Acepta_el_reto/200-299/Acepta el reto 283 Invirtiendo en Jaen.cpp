#include <iostream>
#include <vector>
using namespace std;
int ans=0,sol=0;
void dfs(int a,vector<vector<int>>& g,vector<bool>& seen){
    seen[a]=true;
    ans++;
    for(int x:g[a]){
        if(!seen[x])dfs(x,g,seen);
    }
}
int main(){
    int n,m;
    string str;
    while(cin>>n>>m){
        sol=0;
        vector<vector<char>> grid(n,vector<char>(m));
        vector<vector<int>>g(n*m,vector<int>());
        vector<bool> seen(n*m,false);
        cin.get();
        for(int i=0;i<n;i++){
            getline(cin,str);
            //cin>>str;
            for(int j=0;j<m;j++){
                grid[i][j]=str[j];
                if(grid[i][j]=='#'){
                    if(i&&grid[i-1][j]=='#'){
                        g[i*m+j].push_back(i*m+j-m);
                        g[i*m+j-m].push_back(i*m+j);
                    }
                    if(j&&grid[i][j-1]=='#'){
                        g[i*m+j].push_back(i*m+j-1);
                        g[i*m+j-1].push_back(i*m+j);
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!seen[i*m+j]&&grid[i][j]=='#'){
                    ans=0;
                    dfs(i*m+j,g,seen);
                    sol=max(ans,sol);
                }
            }
        }
        cout<<sol<<'\n';
    }
}
