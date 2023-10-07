#include <iostream>
using namespace std;
int main(){
    int n,p;
    while(cin>>n>>p){
        if(n<0&&p<0)break;
        if(n==1&&p==0)cout<<"YES\n";
        else if(n>p)cout<<"NO\n";
        else cout<<"YES\n";
    }
}
