#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        string x;
        bool m=false;;
        stack <string> e,o;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(x=="")continue;
                if((x.back()-'0')&1)o.push(x);
                else e.push(x);
                x="";
            }
            else x+=s[i];
        }
        if(x!=""){
            if((x.back()-'0')&1)o.push(x);
            else e.push(x);
        }
        while(e.size()){
            cout<<e.top();
            e.pop();
            if(!(e.empty()&&o.empty()))cout<<' ';
        }
        while(o.size()){
            cout<<o.top();
            o.pop();
            if(!(e.empty()&&o.empty()))cout<<' ';
        }
        cout<<'\n';
    }
}