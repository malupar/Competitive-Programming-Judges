#include <iostream>
#include <vector>
using namespace std;
int ls(int n){
    return n<<1;
}
int rs(int n){
    return (n<<1)+1;
}
int f(int a,int b){
    return a+b;
}
void pupd(int n,int l,int r,vector<int>& g,int a,int b){
    if(l>a||r<a)return;
    if(l==r&&l==a){
        g[n]=b;
    }
    else{
        int mid=(r+l)/2;
        pupd(ls(n),l,mid,g,a,b);
        pupd(rs(n),mid+1,r,g,a,b);
        g[n]=f(g[ls(n)],g[rs(n)]);
    }
}
int val(int n,int l,int r,vector<int>& g,int a,int b){
    if(l>b||r<a)return 0;
    if(l>=a&&r<=b)return g[n];
    int mid=(r+l)/2;
    int vall=val(ls(n),l,mid,g,a,b);
    int valr=val(rs(n),mid+1,r,g,a,b);
    return f(vall,valr);
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n,x,sz;
    char c;
    bool f=true;
    vector<int> g;
    while(cin>>c>>n){
        if(c=='s'){
            cin>>x;
            pupd(1,0,sz-1,g,n,x);
        }
        if(c=='g'){
            if(f)f=false;
            else cout<<' ';
            cout<<val(1,0,sz-1,g,0,n);
        }
        if(c=='r'){
            if(g.size())cout<<'\n';
            g=vector<int>(4*n,0);
            sz=n;
            f=true;
        }
    }
    cout<<'\n';
}
