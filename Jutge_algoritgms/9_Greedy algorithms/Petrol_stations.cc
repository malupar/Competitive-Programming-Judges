#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int x,d,n;
    while(cin>>x>>d>>n){
        vector<int> s(n);
        for(int& i:s)cin>>i;
        s.push_back(d);
        sort(s.begin(),s.end());
        int last=x,ans=0;
        for(int i=0;i<n;i++){
            if(s[i+1]>last){
                ans++;
                last=s[i]+x;
            }
        }
        cout<<ans<<'\n';
    }
}
