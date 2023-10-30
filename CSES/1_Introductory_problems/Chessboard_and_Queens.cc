#include <iostream>
#include <vector>
using namespace std;
int ans=0;
bool check(int x,int y,int n,vector<vector<int> >& g){
    for(int i=x,j=y;i>=0&&j>=0;i--,j--){
        if(g[i][j]==-1)return false;
        //else if(g[i][j])break;
    }
    for(int i=x,j=y;i<n&&j>=0;i++,j--){
        if(g[i][j]==-1)return false;
        //else if(g[i][j])break;
    }
    for(int i=x;i>=0;i--){
        if(g[i][y]==-1)return false;
        //if(g[i][y])break;
    }
    for(int i=y;i>=0;i--){
        if(g[x][i]==-1)return false;
        //if(g[x][i])break;
    }
    return true;
}
bool ok=false;
void print(int n,vector<vector<int> >& g,int cont,int last){
    if(n==cont){
        ans++;
        return;
    }
        for(int i=0;i<n;i++){
            if(!g[i][last]){
                if(check(i,last,n,g)){
                    g[i][last]=-1;
                    print(n,g,cont+1,last+1);
                    g[i][last]=0;
                }
            }
    }
}
int main(){
    /*//cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);*/
    int n=8;
    char x;
    vector<vector<int> >v(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>x;
            if(x=='.')v[i][j]=0;
            else v[i][j]=1;
        }
    }
    print(n,v,0,0);
    cout<<ans;
}