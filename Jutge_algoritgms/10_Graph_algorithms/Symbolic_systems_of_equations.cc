#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
bool ok=true;
vector<int> topsort(vector<vector<int> >& v){
    int n=v.size();
    vector<int> g(n,0),ans;
    queue<int> q;
    for(int i=0;i<n;i++)for(int x:v[i])g[x]++;
    for(int i=0;i<n;i++)if(!g[i])q.push(i);
    while(!q.empty()){
        int u=q.front();
        ans.push_back(u);
        q.pop();
        for(int x:v[u]){
            g[x]--;
            if(!g[x])q.push(x);
        }
    }
    if(ans.size()!=n){
        ok=false;
        return {};
    }
    return ans;
}
int main(){
    int n,k;
    string str,s,fs;
    while(cin>>n){
        ok=true;
        map<string,int> m;
        map<int,string> f,c;
        vector<vector<int> >v(n,vector<int>()),v2(n,vector<int>());
        for(int i=0;i<n;i++){
            cin>>str;
            m[str]=i;
            c[i]=str;
        }
        cin>>k;
        while(k--){
            cin>>str>>s>>fs;
            f[m[str]]=fs;
            while(cin>>s){
                if(s==")")break;
                if(s!="("){
                    int x=m[s];
                    v[x].push_back(m[str]);
                    v2[m[str]].push_back(x);
                }
            }
        }
        vector<int> sol=topsort(v);
        if(!ok)cout<<"No solution!\n";
        else{
            vector<string> ans(n);
            for(int i=0;i<n;i++)ans[i]="";
            for(int y:sol){
                if(f.find(y)!=f.end()){
                    ans[y]=f[y]+" ( ";
                    for(int z:v2[y]){
                        ans[y]+=ans[z]+' ';
                    }
                    ans[y]+=')';
                }
                else ans[y]=c[y];
            }
            for(auto x:m){
                cout<<x.first<<" -> "<<ans[x.second]<<'\n';
            }
        }
        cout<<'\n';
    }
}
