#include <iostream>
#include <vector>
using namespace std;
#define int long long
int n;
vector<vector<int>> dp(5001, vector<int>(5001,-1));
int Dp(int i, int j, vector<int>& v){
    if(i == j) return dp[i][j] = v[i];
    if(i > j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = max(min(Dp(i+1,j-1,v), Dp(i+2,j,v)) + v[i],min(Dp(i+1,j-1,v), Dp(i,j-2,v)) + v[j]);
}
signed main(){
    cin >> n;
    vector<int> v(n);
    for(int& i : v) cin >> i;
    cout << Dp(0,n-1,v) << '\n';
}