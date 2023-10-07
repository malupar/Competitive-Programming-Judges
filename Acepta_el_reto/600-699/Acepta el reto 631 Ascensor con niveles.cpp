#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define int long long
signed main(){
    int n,a,b,c,ans,ma=0,l,r;
    while(cin>>n){
    ma=l=r=0;
    vector<pair<pair<int,int>,int> > v(n);
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        v[i]={{a,b},c};
        ma=max(ma,b);
        r=max(r,c);
    }
    sort(v.begin(),v.end());
    int next;
    while(l<=r){
        int mid=(r-l)/2+l;
        next=0;
        for(int i=0;i<n;i++){
            if(next<v[i].first.first)break;
            if(mid>=v[i].second)next=max(v[i].first.second,next);
        }
        if(next==ma){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<'\n';
    }
}
