#include <iostream>
#include <vector>
using namespace std;
#define int long long
signed main(){
    int t,n;
    while(cin>>t>>n){
        if(!t&&!n)break;
        vector<int> pre(n+1),suf(n+1),v(n);
        for(int& i:v)cin>>i;
        pre[0]=suf[n]=0;
        for(int i=1;i<=n;i++)pre[i]=pre[i-1]+v[i-1];
        int ans=1e18,sol=0;
        for(int i=n-1;i>=0;i--)suf[i]=suf[i+1]+v[i];
        for(int i=n-1;i>=t;i--){
            sol=sol+suf[i+1]+v[i];
            //cout<<sol<<' ';
        }
        for(int i=0;i<=n-t;i++){
            //cout<<i<<' '<<i+t<<' ';
            //cout<<sol<<'\n';
            ans=min(ans,sol);
            sol=sol+pre[i+1]-suf[i+t];
        }
        cout<<min(ans,sol)<<'\n';
    }
}
