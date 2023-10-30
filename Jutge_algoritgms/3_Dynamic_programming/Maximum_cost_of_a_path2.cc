#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
    int n,x;
    while(cin>>n){
        vector<ll> dp(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>x;
                if(j>i)dp[j]=max(dp[j],dp[i]+x);
            }
        }
        ll ans=0;
        for(int i=0;i<n;i++)ans=max(ans,dp[i]);
        cout<<ans<<'\n';
    }
}