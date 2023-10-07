#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(!n)break;
        int ans=0;
        vector<vector<int>> grid(n,vector<int>(n));
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>grid[i][j];
        bool ok=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++)if(grid[i][j])ok=false;
        }
        if(ok)ans++;
        ok=true;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)if(grid[i][j])ok=false;
        }
        if(ok)ans++;
        if(ans)cout<<"SI\n";
        else cout<<"NO\n";
    }
}