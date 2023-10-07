#include <iostream>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        x=n;
        while(n%3!=0){
            n-=4;
        }
        if(n<0)cout<<"IMPOSIBLE\n";
        else cout<<(x-n)/4<<'\n';
    }
}
