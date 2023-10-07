#include <iostream>
#include <vector>
using namespace std;
int gcd(int a,int b){
    if(!b)return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return 1LL*a*b/gcd(a,b);
}
int dfs(int a,vector<int>& nums,vector<int>& seen,int cont){
    if(seen[a])return cont;
    seen[a]=1;
    return dfs(nums[a]-1,nums,seen,cont+1);
}
int main(){
    int n,ans;
    while(cin>>n){
        if(!n)break;
        ans=1;
        vector<int> nums(n),seen(n,0);
        for(int& i:nums)cin>>i;
        for(int i=0;i<n;i++){
            if(!seen[i])ans=lcm(ans,dfs(i,nums,seen,0));
        }
        cout<<ans<<'\n';
    }
}
