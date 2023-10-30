#include <iostream>
#include <vector>
using namespace std;
const int mod=1e8+7;
typedef long long ll;
int main(){
    int n=1e4;
    vector<vector<vector<ll>>> dp(n+1,vector<vector<ll>>(2,vector<ll>(3)));
    //dp[i][0][0] acaba en 2 de 1x1 (se puede llegar desde todos)
    //dp[i][0][1] acaba en 1 de 1x2 en vertical (se puede llegar desde todos)
    //dp[i][1][0] acaba en 2 de 1x2 en horizontal (se puede llegar desde los que acaban en 1x1)
    //dp[i][1][1] acaba en 1 de 2x2 (se puede llegar desde los que acaba en 1 1x2)
    //dp[i][1][2] acaba en 1 de 1x1 y 1 de 1x2 en horizontal (se puede llegar desde los que acaban en 1x1 y en 1x2 y 1x1)
    dp[0][1][1]=1;
    for(int i=1;i<=n;i++){
        dp[i][0][0]=(dp[i-1][0][0]+dp[i-1][1][0]+dp[i-1][0][1]+dp[i-1][1][1]+dp[i-1][1][2])%mod;
        dp[i][0][1]=(dp[i-1][0][0]+dp[i-1][1][0]+dp[i-1][0][1]+dp[i-1][1][1]+dp[i-1][1][2])%mod;
        dp[i][1][0]=(dp[i-1][0][0])%mod;
        dp[i][1][2]=(dp[i-1][0][0]*2+dp[i-1][1][2])%mod;
        dp[i][1][1]=(dp[i-1][0][1])%mod;
    }
    while(cin>>n){
        cout<<(dp[n][0][0]+dp[n][1][0]+dp[n][1][1]+dp[n][0][1]+dp[n][1][2])%mod<<'\n';
    }
}