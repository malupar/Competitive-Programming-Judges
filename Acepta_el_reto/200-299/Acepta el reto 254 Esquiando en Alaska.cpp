#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(!n)break;
        vector<int> h(n),e(n);
        int ans=0;
        for(int& i:h)cin>>i;
        for(int& i:e)cin>>i;
        sort(h.begin(),h.end());
        sort(e.begin(),e.end());
        for(int i=0;i<n;i++){
            ans+=max(h[i]-e[i],e[i]-h[i]);
        }
        cout<<ans<<'\n';
    }
}
