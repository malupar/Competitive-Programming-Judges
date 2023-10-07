#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int cnt=0;
        while(n>9){
            int x=1;
            while(n){
                x*=n%10;
                n/=10;
            }
            n=x;
            cnt++;
        }
        cout<<cnt<<'\n';
    }
}