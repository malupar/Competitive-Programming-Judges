#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pii pair<int,int>
int main(){
    int n,ans;
    while(cin>>n){
        if(!n)break;
        ans=0;
        vector<pii> a(n);
        vector<int> req(n+1),seen(n+1);
        for(int i=0;i<n;i++){
            cin>>a[i].first>>a[i].second;
            req[a[i].second]++;
        }
        sort(a.begin(),a.end());
        int left=n,j=n;
        for(int i=0;i<n;i++){
            if(left>=a[i].second){
                ans=max(ans,a[i].first);
                left--;
                seen[a[i].second]++;
                while(j>left){
                    left=left-req[j]+seen[j];
                    j--;
                }
            }
        }
        cout<<ans<<'\n';
    }
}
