#include <iostream>
using namespace std;
int main(){
    string str;
    cin.get();
    while(getline(cin,str)){
        int c=0,l=0;
        for(auto x:str){
            if(x=='!')c++;
            if(x>='a'&&x<='z')l++;
            if(x>='A'&&x<='Z')l++;
        }
        if(c>l)cout<<"ESGRITO\n";
        else cout<<"escrito\n";
    }
}
