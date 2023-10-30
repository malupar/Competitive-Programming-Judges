#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
vector<pair<int,int>> mov={{1,2},{-1,2},{1,-2},{-1,-2},{2,1},{-2,1},{2,-1},{-2,-1}};
int main(){
    int r,c,k;
    while(cin>>r>>c>>k){
        vector<vector<vector<ll>>> dp(r,vector<vector<ll>>(c,vector<ll>(k+1)));
        vector<vector<int>> grid(r,vector<int>(c));
        for(int i=0;i<r;i++)for(int j=0;j<c;j++)cin>>grid[i][j];
        dp[0][0][0]=grid[0][0];
        for(int jump=0;jump<=k;jump++){
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    if(i)dp[i][j][jump]=max(dp[i][j][jump],dp[i-1][j][jump]+grid[i][j]);
                    if(j)dp[i][j][jump]=max(dp[i][j][jump],dp[i][j-1][jump]+grid[i][j]);
                    if(jump<k){
                        for(auto m:mov){
                            if(i-m.first>=0&&i-m.first<r&&j-m.second>=0&&j-m.second<c){
                                dp[i-m.first][j-m.second][jump+1]=max(dp[i-m.first][j-m.second][jump+1],dp[i][j][jump]+grid[i-m.first][j-m.second]);
                            }
                        }
                    }
                }
            }
        }
        cout<<dp[r-1][c-1][k]<<'\n';
    }
}
