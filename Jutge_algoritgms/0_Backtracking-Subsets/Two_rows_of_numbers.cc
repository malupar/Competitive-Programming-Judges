#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void bt(int i,vector<int>& v,vector<int>& l,vector<int>& l2){
    int n=v.size()/2;
    if(i==v.size()){
        for(int i=0;i<n;i++){
            if(i)cout<<' ';
            cout<<l[i];
        }
        cout<<'\n';
        for(int i=0;i<n;i++){
            if(i)cout<<' ';
            cout<<l2[i];
        }
        cout<<"\n\n";
        return;
    }
    if(l.size()<n){
        l.push_back(v[i]);
        bt(i+1,v,l,l2);
        l.pop_back();
    }
        if(l2.size()<n&&v[i]>l[(int)l2.size()]){
        l2.push_back(v[i]);
        bt(i+1,v,l,l2);
        l2.pop_back();
        }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(2*n),l,l2;
    for(int i=0;i<2*n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    bt(0,v,l,l2);
}