#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;
#define int long long int
signed main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int a,n;
    while(cin>>a){
    if(!a)break;
        map<int,int> m;
        cin>>n;
        vector<pair<int,int> >v(n),skyline;
        priority_queue<pair<int,pair<int,int> > >pq;
        for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            pq.push({-v[i].first,{v[i].second,0}});
            pq.push({-(v[i].first+a),{v[i].second,1}});
        }
        int ans=0,max_h;
        while(!pq.empty()){
            int h=pq.top().second.first;
            int st=-pq.top().first;
            int fin=pq.top().second.second;
            //cout<<st<<' '<<h<<'\n';
            pq.pop();
            if(fin)m[h]++;
            else m[h]--;
            for(auto it=m.rbegin();it!=m.rend();it++){
                    if(it->second){
                        max_h=it->first;
                        break;
                    }
                    else max_h=0;
            }
            if(!pq.empty())ans+=(-pq.top().first-st)*max_h;
            //cout<<max_h<<' ';
        }
        cout<<ans<<'\n';
    }
}
