#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
	int main() {
    long long int maxi,sol,n,sum;
    while(cin>>maxi>>n){
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        int l=0;
        int r=v[n-1];
        while(l<=r){
            sum=0;
            //cout<<l<<' '<<r<<' ';
            int mid=(r-l)/2+l;
            for(int i=0;i<n;i++){
                if(v[i]>mid)sum+=mid;
                else sum+=v[i];
            }
            if(sum>maxi)r=mid-1;
            else {
                l=mid+1;
                sol=mid;
            }
        }
        /*if(sol<v[0])cout<<-1<<'\n';
        else cout<<sol<<'\n';*/
        cout<<sol<<'\n';
    }
    return 0;
}
