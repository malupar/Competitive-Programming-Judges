#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
	int m,n,t;
	while(cin>>m){
	queue <int>q;
	if(m==-1){
		cin>>t;
		return 0;
	}
	q.push(m);
	while(cin>>m){
		if(m!=-1)q.push(m);
		else break;
	}
	vector<int>v(q.size());
	while(!q.empty()){
		v[q.size()-1]=q.front();
		q.pop();
	}
	cin>>t;
	if(v.empty()&&t==0)return 0;
	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<n/2;j++){
			int k=v[j];
			v[j]=v[n-j-1];
			v[n-j-1]=k;
		}
	}
	cout<<v[0]<<'\n';
}
}