#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%4==3){
        cout<<"YES\n";
        cout<<n-n/2<<'\n';
        cout<<"1 2 ";
        for(int i=4;i<=n;i+=4)cout<<i<<' '<<i+3<<' ';
        cout<<'\n';
        cout<<n/2<<'\n';
        cout<<"3 ";
        for(int i=5;i<=n;i+=4)cout<<i<<' '<<i+1<<' ';
    }
    else if(n%4==0){
        cout<<"YES\n";
        cout<<n-n/2<<'\n';
        for(int i=1;i<=n;i+=4)cout<<i<<' '<<i+3<<' ';
        cout<<'\n';
        cout<<n/2<<'\n';
        for(int i=2;i<=n;i+=4)cout<<i<<' '<<i+1<<' ';
    }
    else cout<<"NO\n";
}