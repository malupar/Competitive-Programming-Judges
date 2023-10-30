#include <iostream>
#include <vector>
using namespace std;
int mini=1e9;
void bt(int i,vector<int>& v,int cont,int tot,vector<int>& sum){
    int dif=tot-cont;
    int ans=max(dif-cont,cont-dif);
    if(ans<mini)mini=ans;
    if(i==v.size())return;
    if(cont+v[i]<=tot/2)bt(i+1,v,cont+v[i],tot,sum);
    int dist=cont+sum[i+1];
    if(tot/2-dist<mini)bt(i+1,v,cont,tot,sum);
}
int main(){
    int n,tot;
    while(cin>>n){
    mini=1e9;
    tot=0;
    vector<int> v(n),sum(n+1);
    sum[n]=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        tot+=v[i];
    }
    for(int i=n-1;i>=0;i--){
        sum[i]=sum[i+1]+v[i];
    }
    bt(0,v,0,tot,sum);
    cout<<mini<<'\n';
    }
}