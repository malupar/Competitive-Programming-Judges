#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(!n)break;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        if(n&1)cout<<2*v[n/2]<<'\n';
        else cout<<v[n/2]+v[n/2-1]<<'\n';
    }
}
