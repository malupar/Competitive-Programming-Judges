#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    bool imp=false;
    char mid='#';
    string str;
    map<char,int> m;
    cin>>str;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(m.find(str[i])==m.end())m.insert(make_pair(str[i],1));
        else m[str[i]]++;
    }
    string sol="";
    for(auto x:m){
        if(x.second%2){
            if(imp){
                cout<<"NO SOLUTION";
                return 0;
            }
            imp=true;
            mid=x.first;
        }
            for(int i=0;i<x.second/2;i++)sol+=x.first;
    }
    for(int i=0;i<(int)sol.length();i++)cout<<sol[i];
    if(mid!='#')cout<<mid;
    for(int i=sol.length()-1;i>=0;i--)cout<<sol[i];
}