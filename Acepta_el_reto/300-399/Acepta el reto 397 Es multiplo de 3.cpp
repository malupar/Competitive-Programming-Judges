#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%3==1)cout<<"NO\n";
        else cout<<"SI\n";
    }
}
