#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int par(int a,vector<int>& id){
    if(id[a]==a)return a;
    return id[a]=par(id[a],id);
}
void MST(vector<pair<int,pair<int,int>>>& edge,int n){
    long long ans=0;
    vector<int> id(n);
    for(int i=0;i<n;i++)id[i]=i;
    for(int i=0;i<edge.size();i++){
        int a=edge[i].second.first,b=edge[i].second.second;
        a=par(a,id),b=par(b,id);
        if(a!=b)id[a]=b;
        else ans+=edge[i].first;
    }
    cout<<ans<<'\n';
}
int main(){
    int n,m,x,y,w;
    while(cin>>n>>m){
        vector<pair<int,pair<int,int>>> edge(m);
        for(int i=0;i<m;i++){
            cin>>x>>y>>w;
            edge[i]={w,{x,y}};
        }
        sort(edge.begin(),edge.end());
        MST(edge,n);
    }
}