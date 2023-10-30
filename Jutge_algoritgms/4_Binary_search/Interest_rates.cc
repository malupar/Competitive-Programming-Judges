#include <iostream>
#include <vector>
using namespace std;
long double bin_exp(long double a,int b){
    if(!b)return 1;
    long double x=bin_exp(a,b/2);
    x*=x;
    if(b&1)return x*a;
    return x;
}
int main(){
    long double a,b,c;
    while(cin>>a>>b>>c){
        int l=1,r=1e7,ans=0;
        c/=100;
        c+=1;
        while(l<=r){
            int mid=(r+l)/2;
            //cout<<a*bin_exp(c,mid)<<' '<<a+mid<<'\n';
            if(a*bin_exp(c,mid)>a+b*mid)r=mid-1;
            else{
                ans=mid;
                l=mid+1;
            }
        }
        cout<<ans+1<<'\n';
    }
}