#include <iostream>
#include <vector>
using namespace std;
bool ok(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return true;
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')return true;
    return false;
}
int main(){
    string str;
    //cin.get();
    while(getline(cin,str)){
        string str2=str;
        int dif='p'-str2[0],ans=0;
        if(dif>0)dif=dif-26;
        for(int i=1;i<str.size();i++){
            if(str[i]<'A'||str[i]>'z'||(str[i]>'Z'&&str[i]<'a'))continue;
            str2[i]+=dif;
            if(str[i]>='a'&&str[i]<='z'){
                if(str2[i]<'a')str2[i]+=26;
            }
            if(str[i]>='A'&&str[i]<='Z'){
                if(str2[i]<'A')str2[i]+=26;
            }
            if(ok(str2[i]))ans++;
        }
        //cout<<str2<<' ';
        if(str2.size()==4&&str2[1]=='F'&&str2[2]=='I'&&str2[3]=='N')break;
        cout<<ans<<'\n';
    }
}
