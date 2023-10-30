#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long int n,p;
    while(cin>>n){
        vector<int> g(n);
        for(int i=0;i<n;i++)cin>>g[i];
        sort(g.begin(),g.end());
        cin>>p;
        long long int l=1,r=1e9,sol=1e18;
        while(l<=r){
            long long int mid=(r+l)/2,last=-1,cont=0;
            for(int i=0;i<n;i++){
                if(g[i]>last){
                    last=g[i]+mid-1;
                    cont++;
                }
            }
            if(cont<=p){
                r=mid-1;
                sol=min(1LL*mid*p,sol);
            }
            else l=mid+1;
        }
        cout<<sol<<'\n';
    }
}