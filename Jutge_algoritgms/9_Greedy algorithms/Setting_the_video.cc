#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pii pair<int,int>
int main(){
    int n;
    while(cin>>n){
        vector<pii> v(n);
        for(auto& i:v)cin>>i.first>>i.second;
        sort(v.begin(),v.end());
        int last=-1e9,ans=0;
        for(int i=0;i<n;i++){
            if(v[i].first>last){
                last=v[i].second;
                ans++;
            }
            else if(v[i].second<last)last=v[i].second;
        }
        cout<<ans<<'\n';
    }
}