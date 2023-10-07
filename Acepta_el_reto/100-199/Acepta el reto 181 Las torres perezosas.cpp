#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(!n)break;
		char grid[n][n];
		int sol[n][n];
		for(int i=0;i<n;i++)for(int j=0;j<n;j++){
			cin>>grid[i][j];
			sol[i][j]=0;
		}
		sol[n-1][0]=1;
		for(int i=n-1;i>=0;i--){
			for(int j=0;j<n;j++){
				if(i&&grid[i][j]!='X'&&grid[i-1][j]!='X')sol[i-1][j]+=sol[i][j];
				if(j<n-1&&grid[i][j]!='X'&&grid[i][j+1]!='X')sol[i][j+1]+=sol[i][j];
			}
		}
		cout<<sol[0][n-1]<<'\n';
	}
}