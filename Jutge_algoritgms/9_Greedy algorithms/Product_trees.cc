#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef long double ld;
int main(){
    int n,sol;
    long double x,y,ans;
    while(cin>>n){
        if(!n)break;
        ans=1;
        priority_queue<long double> q;
        for(int i=0;i<n;i++){
            cin>>x;
            q.push(-x);
        }
        while(q.size()>1){
            x=-q.top();
            q.pop();
            y=-q.top();
            q.pop();
            ans*=x*y;
            q.push(-x*y);
        }
        ans*=(-q.top());
        while(ans>=1e7)ans/=10;
        sol=ans;
        cout<<sol<<'\n';
    }
}