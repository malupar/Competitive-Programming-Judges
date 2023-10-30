#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> GRAY(int n){
    vector<vector<int>> ans;
    if(!n){
        vector<int> v;
        ans.push_back(v);
        return ans;
    }
    ans=GRAY(n-1);
    for(int i=(1<<(n-1))-1;i>=0;i--)ans.push_back(ans[i]);
    for(int i=0;i<(1<<(n-1));i++)ans[i].push_back(0);
    for(int i=(1<<(n-1));i<(1<<(n));i++)ans[i].push_back(1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> GRAYCODE=GRAY(n);
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++)cout<<GRAYCODE[i][j];
        cout<<'\n';
    }
}