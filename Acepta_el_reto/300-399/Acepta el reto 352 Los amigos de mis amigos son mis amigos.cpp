#include <iostream>
#include <vector>
using namespace std;
int cont=0;
int conexa(vector<vector<int> >&con, int num,vector<bool>& visto){
	cont++;
	visto[num]=true;
	for(int x:con[num]){
		if(!visto[x])conexa(con,x,visto);
	}
}
int maxiconexa(vector<vector<int> >&con){
	int n=con.size();
	int maxi=0;
	vector<bool> visto(n);
	for(int i=0;i<n;i++){
		if(!visto[i]){
			conexa(con,i,visto);
			maxi=max(maxi,cont);
			cont=0;
		}
	}
	return maxi;
}
int main(){
	int t,n,k,a,b;
	cin>>t;
	while(t--){
	cin>>n>>k;
		vector<vector<int> >con(n);
		for(int i=0;i<k;i++){
			cin>>a>>b;
			a--; b--;
			con[a].push_back(b);
			con[b].push_back(a);
		}
		cout<<maxiconexa(con)<<'\n';
	}
}
