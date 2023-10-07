#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<string> tot(30,"");
	tot[0]="";
	tot[1]="BUH";
	long long int n,l;
	int maxi=1;
	while(cin>>n>>l){
		l--;
		if(tot[n]==""){
			for(int i=maxi+1;i<=n;i++){
				tot[i]=tot[i-1];
				tot[i]+="B";
				for(int j=0;j<i;j++){
					tot[i]+="U";
				}
				tot[i]+="H";
				tot[i]+=tot[i-1];
			}
		}
		cout<<tot[n][l]<<'\n';
	}
}
