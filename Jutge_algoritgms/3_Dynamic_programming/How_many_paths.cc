#include <iostream>
#include <vector>
using namespace std;
const int mod=1e9+7;
int main(){
    int n,m;
    while(cin>>n>>m){
        vector<vector<int>> grid(n,vector<int>(m)),dp(n+1,vector<int>(m));
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>grid[i][j];
        for(int i=0;i<m;i++)dp[0][i]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=1;k<=grid[i][j];k++){
                    if(i+k<=n)dp[i+k][j]=(dp[i+k][j]+dp[i][j])%mod;
                    if(i+k<=n&&j>=k)dp[i+k][j-k]=(dp[i+k][j-k]+dp[i][j])%mod;
                    if(i+k<=n&&j+k<m)dp[i+k][j+k]=(dp[i+k][j+k]+dp[i][j])%mod;
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++)ans=(ans+dp[n][i])%mod;
        cout<<ans<<'\n';
    }
}