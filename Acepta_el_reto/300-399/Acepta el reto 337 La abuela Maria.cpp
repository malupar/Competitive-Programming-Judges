#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    while(t--){
        vector<int> d(6);
        for(int i=0;i<12;i++){
            cin>>x;
            d[i%6]+=x;
        }
        bool ok=true;
        for(int i=0;i<5;i++)if(d[i]!=d[i+1])ok=false;
        if(ok)cout<<"SI\n";
        else cout<<"NO\n";
    }
}
