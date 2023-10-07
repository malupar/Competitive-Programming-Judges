#include <iostream>
using namespace std;
int main(){
    int n,x,ans;
    while(cin>>n){
        if(n<0)break;
        ans=0;
        while(cin>>x){
            if(x==-1)break;
            ans+=max(x-n,n-x);
            n=x;
        }
        cout<<ans<<'\n';
    }
}