#include <iostream>
#include <vector>
#include <map>
using namespace std;
bool ok(int a,vector<vector<pair<int,int>>>& g,vector<int>& c){
    for(auto x:g[a]){
        if(c[x.first]==-1){
            if(x.second)c[x.first]=1-c[a];
            else c[x.first]=c[a];
            if(!ok(x.first,g,c))return false;
        }else{
            if(c[a]==c[x.first]&&x.second)return false;
            if(c[a]!=c[x.first]&&!x.second)return false;
        }
    }
    return true;
}
int main(){
    int n,m,test=1;
    string s;
    while(cin>>n){
        map<string,int> mp;
        vector<vector<pair<int,int>>> g(n,vector<pair<int,int>>());
        vector<int> c(n,-1);
        for(int i=0;i<n;i++){
            cin>>s;
            mp[s]=i;
        }
        cin>>m;
        char b;
        while(m--){
            cin>>s>>b;
            int x=mp[s];
            cin>>s;
            int y=mp[s];
            cin>>s>>s;
            if(s=="human"){
                g[x].push_back({y,0});
                g[y].push_back({x,0});
            }else{
                cin>>s;
                g[x].push_back({y,1});
                g[y].push_back({x,1});
            }
        }
        bool o=true;
        int ans=1;
        for(int i=0;i<n;i++){
            if(c[i]==-1){
                c[i]=0;
                if(!ok(i,g,c))ans*=0;
                else ans*=2;
            }
        }
        cout<<"Case "<<test<<": ";
        cout<<ans<<'\n';
        test++;
    }
}