#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int n,k;
    while(cin>>n>>k){
        if(!n&&!k)break;
        vector<int> v(n);
        for(int& i:v)cin>>i;
        multiset<int> s;
        for(int i=0;i<k;i++)s.insert(-v[i]);
        for(int i=k;i<n;i++){
            for(auto x:s){
                cout<<-x<<' ';
                break;
            }
            auto x=s.lower_bound(-v[i-k]);
            s.erase(x);
            s.insert(-v[i]);
        }
        for(auto x:s){
            cout<<-x<<'\n';
            break;
        }
    }
}
