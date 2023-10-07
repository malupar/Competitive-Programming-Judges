#include <iostream>
using namespace std;
int main(){
    int n,x;
    while(cin>>n){
        if(!n)break;
        bool ok=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>x;
                if(i==j&&x!=1)ok=false;
                if(i!=j&&x!=0)ok=false;
            }
        }
        if(ok)cout<<"SI\n";
        else cout<<"NO\n";
    }
}