#include <iostream>
#include <vector>
using namespace std;
#define int long long
const int mod=46337;
vector<int> mult(vector<int>& a,vector<int>& b){
    return {(a[0]*b[0]+a[1]*b[2])%mod,(a[0]*b[1]+a[1]*b[3])%mod,(a[2]*b[0]+a[3]*b[2])%mod,(a[2]*b[1]+a[3]*b[3])%mod};
}
vector<int> bin_exp(vector<int>& a,int b){
    if(b==1)return a;
    vector<int> x=bin_exp(a,b/2);
    x=mult(x,x);
    if(b&1)return mult(a,x);
    else return x;
}
signed main(){
    int n;
    while(cin>>n){
        if(!n)break;
        vector<int> v={0,1,1,1};
        cout<<bin_exp(v,n)[1]<<'\n';
    }
}
