#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,v;
    long long dp[16][16][2];
    for(int i=0;i<16;i++)for(int j=0;j<16;j++)dp[i][j][0]=dp[i][j][1]=0;
    dp[0][0][1]=1;
    for(int i=1;i<16;i++){
        for(int j=0;j<16;j++){
            dp[i][j][0]=dp[i-1][j][1]*21;
            if(j)dp[i][j][1]+=(dp[i-1][j-1][0]+dp[i-1][j-1][1])*5;
        }
    }
    while(cin>>n>>v){
        cout<<dp[n][v][0]+dp[n][v][1]<<'\n';
    }
}