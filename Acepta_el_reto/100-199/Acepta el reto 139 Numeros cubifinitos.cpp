#include <iostream>
#include <set>
using namespace std;
int get(int x){
    int val=0;
    while(x){
        int num=x%10;
        val+=num*num*num;
        x/=10;
    }
    return val;
}
int main(){
    int n;
    while(cin>>n){
        if(!n)break;
        bool ok=true;
        set<int> s;
        s.insert(n);
        cout<<n;
        while(n!=1){
            n=get(n);
            cout<<" - "<<n;
            if(s.find(n)!=s.end()){
                ok=false;
                break;
            }
            s.insert(n);
        }
        cout<<" -> ";
        if(ok)cout<<"cubifinito.\n";
        else cout<<"no cubifinito.\n";

    }
}
