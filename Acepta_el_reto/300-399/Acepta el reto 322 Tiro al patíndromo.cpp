#include <iostream>
#include <vector>
using namespace std;
string ans="";
void palindrome(string& s,int i,int j,vector<vector<int> >& dp){
        if(i>j)return;
        if(i==j){
            ans.push_back(s[i]);
            return;
        }
        if(dp[i+1][j]==dp[i][j])palindrome(s,i+1,j,dp);
        else if(dp[i+1][j-1]==dp[i][j]-2&&s[i]==s[j]){
            ans.push_back(s[i]);
            palindrome(s,i+1,j-1,dp);
            ans.push_back(s[i]);
        }
        else if(dp[i][j-1]==dp[i][j])palindrome(s,i,j-1,dp);
}
int main(){
    string s;
    while(cin>>s){
        ans="";
        int n=s.size();
        vector<vector<int> >dp(n,vector<int>(n));
        for(int i=0;i<n;i++)dp[i][i]=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1])dp[i][i+1]=2;
            else dp[i][i+1]=1;
        }
        for(int i=2;i<n;i++){
            for(int j=0;j<n-i;j++){
                //cout<<j<<' ';
                dp[j][j+i]=max(dp[j][j+i-1],dp[j+1][j+i]);
                if(s[j]==s[j+i])dp[j][j+i]=max(dp[j][j+i],dp[j+1][j+i-1]+2);
                //cout<<dp[j][j+i]<<' ';
            }
            //cout<<'\n';
        }
        //cout<<dp[0][n-1];
        palindrome(s,0,n-1,dp);
        cout<<ans<<'\n';
    }
}
