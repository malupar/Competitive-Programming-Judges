#include <iostream>
#include <vector>
using namespace std;
bool ok(vector<int>& tape,vector<int>& dp,int tot,int n){
    if(tot>2*n)return false;
    int k=tape.size(),ma=0;
    for(int i=0;i<(1<<k);i++){
        for(int j=0;j<k;j++){
            if(i&(1<<j))continue;
            if(dp[i]+tape[j]<=n)dp[i|(1<<j)]=dp[i]+tape[j];
            ma=max(ma,dp[i]);
        }
    }
    if(tot-ma<=n)return true;
    return false;
}
int main(){
    int n,k,tot;
    while(cin>>n>>k){
        tot=0;
        vector<int> v(k),dp(1<<k);
        for(int i=0;i<k;i++){
            cin>>v[i];
            tot+=v[i];
        }
        if(ok(v,dp,tot,n))cout<<"SI\n";
        else cout<<"NO\n";
    }
}
