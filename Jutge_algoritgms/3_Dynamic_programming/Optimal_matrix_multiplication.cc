#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    while(cin>>n){
        vector<int> d(n+1);
        for(int& i:d)cin>>i;
        vector<vector<ll>> dp(n+1,vector<ll> (n+1,1e18));
        for(int i=0;i<n;i++)dp[i][i+1]=0;
        for(int i=2;i<=n;i++){
            for(int j=0;j<=n-i;j++){
                for(int k=j+1;k<j+i;k++){
                    dp[j][j+i]=min(dp[j][j+i],dp[j][k]+dp[k][j+i]+1ll*d[j]*d[k]*d[j+i]);
                }
            }
        }
        cout<<dp[0][n]<<'\n';
    }
}