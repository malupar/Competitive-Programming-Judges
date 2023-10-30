#include <iostream>
#include <vector>
using namespace std;
void bt(int i,int k,vector<int>& v,int cont,int m){
    if(i==k)cout<<cont<<'\n';
    else{
        if(cont+v[i]<=m)bt(i+1,k,v,cont+v[i],m);
        if(cont-v[i]>=-m)bt(i+1,k,v,cont-v[i],m);
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(k);
    for(int i=0;i<k;i++)cin>>v[i];
    bt(0,k,v,0,n/2);
}