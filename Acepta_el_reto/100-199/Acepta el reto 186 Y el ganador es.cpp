#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n,m,x;
    string str;
    while(cin>>n>>m){
        if(!n&&!m)break;
        vector<set<string> >v(n,set<string>());
        while(m--){
            cin>>x>>str;
            x--;
            v[x].insert(str);
        }
        if(n==1){
            cout<<1<<'\n';
            continue;
        }
        int ma=0,ans=-1;
        for(int i=0;i<n;i++){
            if(v[i].size()>ma){
                ma=v[i].size();
                ans=i+1;
            }
            else if(v[i].size()==ma)ans=-1;
        }
        if(ans==-1)cout<<"EMPATE\n";
        else cout<<ans<<'\n';
    }
}
