#include <iostream>
#include <vector>
using namespace std;
#define int long long int
int g1=0,g2=0,mini=1e9,n;
void a(int i,vector<int>& p){
    if(i==n){
        mini=min(mini,max(g1-g2,g2-g1));
        return;
    }
    g1+=p[i];
    a(i+1,p);
    g1-=p[i];
    g2+=p[i];
    a(i+1,p);
    g2-=p[i];
}
signed main(){
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    a(0,v);
    cout<<mini;
}