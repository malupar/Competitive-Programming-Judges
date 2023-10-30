#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const int mod=1e8+7;
int main(){
    int n,m;
    cin>>m>>n;
    vector<int> v(n);
    ll w[m+1][n+1];
    for(int i=0;i<=m;i++)for(int j=0;j<=n;j++)w[i][j]=0;
    w[m/2][0]=1;
    for(int& i:v)cin>>i;
    for(int i=0;i<n;i++){
        for(int j=0;j<=m;j++){
            if(w[j][i]){
                if(j>=v[i]){
                    w[j-v[i]][i+1]+=w[j][i]%mod;
                }
                if(j+v[i]<=m){
                    w[j+v[i]][i+1]+=w[j][i]%mod;
                }
            }
        }
    }
    for(int i=0;i<=m;i++)if(w[i][n])cout<<i-m/2<<' '<<w[i][n]%mod<<'\n';
}