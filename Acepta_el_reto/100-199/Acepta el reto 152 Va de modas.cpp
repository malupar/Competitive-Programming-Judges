#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,x,ans,sol;
    while(cin>>n){
        if(!n)break;
        ans=0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second>ans){
                ans=x.second;
                sol=x.first;
            }
        }
        cout<<sol<<'\n';
    }
}