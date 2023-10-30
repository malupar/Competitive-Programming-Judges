#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> dp(501,vector<int>(501,-1));
int cut(int a, int b){
    if(dp[a][b] != -1) return dp[a][b];
    if(a == b) return 0;
    int ans = 1e9;
    for(int i = 1; i < a; i++)
        ans = min(ans, cut(i,b) + cut(a-i,b)+1);
    for(int i = 1; i < b; i++)
        ans = min(ans, cut(a,i) + cut(a,b-i)+1);
    return dp[a][b] = dp[b][a] = ans;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << cut(a,b) << '\n';
}