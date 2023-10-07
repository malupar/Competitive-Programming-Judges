#include <iostream>
using namespace std;
int main(){
    int n,ans,x;
    while(cin>>n){
        ans=0;
        while(n--){
            cin>>x;
            ans=max(ans,x);
        }
        cout<<ans<<'\n';
    }
}