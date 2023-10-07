#include <iostream>
#include <vector>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    long long int m,n;
    cin>>n>>m;
    while(n!=0||m!=0){
        vector<long long int> v(n+1);
        v[0]=0;
        for(int i=1;i<=n;i++){
            cin>>v[i];
            v[i]+=v[i-1];
        }
        if(v[n]<m)cout<<"IMPOSIBLE\n";
        else{
        long long int mini=1e9;
        for(int i=1;i<=n;i++){
            if(v[i]<m)continue;
            long long int mid,hi=i,lo=0;
            while(lo<=hi){
                mid=(hi-lo)/2+lo;
                if(v[i]-v[mid]>=m){
                    if(v[i]-v[mid]<=mini){
                        mini=v[i]-v[mid];
                        lo=mid+1;
                    }
                    else lo=mid+1;
                }
                else hi=mid-1;
        }
        }
        cout<<mini<<'\n';
    }
    cin>>n>>m;
    }
}
