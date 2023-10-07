#include <iostream>
#include <vector>
using namespace std;
#define int long long
bool diabolico(vector<vector<int>>& grid){
    int sum=0,n=grid.size();
        for(int i=0;i<n;i++)sum+=grid[i][0];
        for(int i=0;i<n;i++){
            int sum2=0;
            for(int j=0;j<n;j++)sum2+=grid[i][j];
            if(sum2!=sum)return false;
        }
        for(int j=0;j<n;j++){
            int sum2=0;
            for(int i=0;i<n;i++)sum2+=grid[i][j];
            if(sum2!=sum)return false;
        }
        int sum2=0;
        for(int i=0;i<n;i++)sum2+=grid[i][i];
        if(sum2!=sum)return false;
        sum2=0;
        for(int i=0;i<n;i++)sum2+=grid[i][n-1-i];
        return sum2==sum;
}
bool esoterico(vector<vector<int>>& grid){
    int n=grid.size(),sum=0,sum2=0;
    sum2=grid[0][0]+grid[0][n-1]+grid[n-1][0]+grid[n-1][n-1];
    vector<int> seen(n*n);
    for(int i=0;i<n;i++)sum+=grid[i][0];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(grid[i][j]<=n*n&&grid[i][j]>0)seen[grid[i][j]-1]++;
    for(int i=0;i<n*n;i++)if(!seen[i])return false;
    if(n*sum2!=4*sum)return false;
    if(n&1){
        if(grid[n/2][n/2]*4==sum2&&grid[0][n/2]+grid[n-1][n/2]+grid[n/2][0]+grid[n/2][n-1]==sum2)return true;
        else return false;
    }
    else{
        int sum3=grid[0][n/2]+grid[n-1][n/2]+grid[n/2][0]+grid[n/2][n-1]+grid[0][n-1-n/2]+grid[n-1][n-1-n/2]+grid[n-1-n/2][0]+grid[n-1-n/2][n-1];
        if(sum3==2*sum2&&grid[n/2][n/2]+grid[n/2][n-1-n/2]+grid[n-1-n/2][n/2]+grid[n-1-n/2][n-1-n/2]==sum2)return true;
        else return false;
    }
}
signed main(){
    int n;
    while(cin>>n){
        if(!n)break;
       vector<vector<int>> grid(n,vector<int>(n));
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>grid[i][j];
        if(!diabolico(grid))cout<<"NO\n";
        else if(esoterico(grid))cout<<"ESOTERICO\n";
        else cout<<"DIABOLICO\n";
    }
}