#include <iostream>
using namespace std;
int main(){
	int t,n,m,sum,l;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n>>m>>l;
		while(n--){
			sum+=m;
			m-=l;
		}
		cout<<sum<<'\n';
	}
}
