#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(!n){
            cout<<0<<'\n';
            continue;
        }
        vector<double> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        int ans=1;
        double st=v[0];
        for(int i=1;i<n;i++){
            if(v[i]>st+1){
                ans++;
                st=v[i];
            }
        }
        cout<<ans<<'\n';
    }
}
