#include <iostream>
#include <vector>
using namespace std;
int mult5(int x){
    if(!x)return 0;
    return x/5+mult5(x/5);
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<mult5(n)<<'\n';
    }
}
