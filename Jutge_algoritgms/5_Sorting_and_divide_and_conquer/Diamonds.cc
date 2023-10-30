#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int V,n,x;
    while(cin>>V>>n){
        if(!V&&!n)break;
        vector<int> v(n);
        bool ok=false;
        for(int& i:v)cin>>i;
        sort(v.begin(),v.end());
        int l=0,r=n-1;
        while(l<r){
            if(v[l]+v[r]<V)l++;
            else if(v[l]+v[r]>V)r--;
            else{
                ok=true;
                break;
            }
        }
        if(ok)cout<<"married"<<endl;
        else cout<<"single"<<endl;
    }
}
