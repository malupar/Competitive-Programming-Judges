#include <iostream>
#include <queue>
using namespace std;
int main(){
	int n,k,m;
	while(cin>>n>>k){
		if(n==0&&k==0)return 0;
	queue<int> q;
	//if(k>=n) k=k%n;
	for(int i=0;i<n;i++)q.push(i);
	while(q.size()!=1){
		for(int i=0;i<k;i++){
			m=q.front();
			q.pop();
			q.push(m);
		}
		q.pop();
	}
	cout<<q.front()+1<<'\n';
	q.pop();
}
}