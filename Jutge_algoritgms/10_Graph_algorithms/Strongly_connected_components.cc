#include <iostream>
#include <vector>
#include <stack>
using namespace std;
stack<int> st;
void dfs(int a,vector<vector<int> >& v,vector<bool>& seen){
    seen[a]=true;
    for(int x:v[a])if(!seen[x])dfs(x,v,seen);
    st.push(a);
}
void dfs2(int a,vector<vector<int> >& v,vector<bool>& seen){
    seen[a]=true;
    for(int x:v[a])if(!seen[x])dfs2(x,v,seen);
}
int main(){
    int n,m,x,y,t;
    cin>>t;
    for(int j=0;j<t;j++){
    cin>>n>>m;
    int cont=0;
    vector<vector<int> > v(n,vector<int>()),v2(n,vector<int>());
    vector<bool> seen(n,false),seen2(n,false);
    while(m--){
        cin>>x>>y;
        v[x].push_back(y);
        v2[y].push_back(x);
    }
    for(int i=0;i<n;i++)if(!seen[i])dfs(i,v,seen);
    while(!st.empty()){
        int i=st.top();
        if(!seen2[i]){
            cont++;
            dfs2(i,v2,seen2);
        }
        st.pop();
    }
    cout<<"Graph #"<<j+1<<" has "<<cont<<" strongly connected component(s).\n";
    }
}
