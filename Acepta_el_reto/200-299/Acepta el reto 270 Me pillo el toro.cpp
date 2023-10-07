#include <iostream>
#include <map>
using namespace std;
int main(){
    int t;
    while(cin>>t){
        if(!t)break;
        string str,c;
        map<string,int> mp;
        while(t--){
            cin.get();
            getline(cin,str);
            cin>>c;
            if(c=="CORRECTO")mp[str]++;
            else mp[str]--;
        }
        for(auto x:mp){
            if(x.second!=0)cout<<x.first<<", "<<x.second<<'\n';
        }
        cout<<"---\n";
    }
}
