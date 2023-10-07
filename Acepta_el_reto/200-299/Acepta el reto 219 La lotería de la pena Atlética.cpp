#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,cont=0;
		cin>>n;
		while(n--){
		cin>>m;
		if(m%2==0)cont++;	
		}
		cout<<cont<<'\n';
	}
}
