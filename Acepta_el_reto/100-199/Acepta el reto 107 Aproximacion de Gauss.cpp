#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    vector<int> p(1e5+2),prime(1e5+2);
    for(int i=2;i<=1e5;i++){
        prime[i]=prime[i-1];
        if(!p[i]){
            for(int j=i;1LL*i*j<=1e5;j++)p[j*i]=i;
            prime[i]++;
        }
    }
    while(cin>>n>>m){
        if(!n&&!m)break;
        if(n==1){
            cout<<"Mayor\n";
            continue;
        }
        long double x=prime[n],error=1,p=1,o=1;
        o/=log(n);
        for(int i=0;i<m;i++)p*=10;
        error/=p;
        x/=n;
        x-=o;
        if(x<0)x*=-1;
        if(x==error)cout<<"Igual\n";
        else if(x>error)cout<<"Mayor\n";
        else cout<<"Menor\n";
    }
}