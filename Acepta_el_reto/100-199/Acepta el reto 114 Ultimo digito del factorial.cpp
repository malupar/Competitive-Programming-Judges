#include <iostream>
#include <vector>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n<2)cout<<1<<'\n';
		else if(n==2)cout<<2<<'\n';
		else if(n==3)cout<<6<<'\n';
		else if(n==4)cout<<4<<'\n';
		else cout<<0<<'\n';
	}
}
