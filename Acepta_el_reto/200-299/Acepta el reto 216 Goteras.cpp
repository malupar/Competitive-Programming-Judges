#include <iostream>
using namespace std;
int main(){
	int t,n,h,m,s;
	char c;
	cin>>t;
	while(t--){
		cin>>n;
		while(n>86400)n-=86400;
		s=n%60;
		n-=s;
		n/=60;
		m=n%60;
		n-=m;
		n/=60;
		h=n;
		if(h<10)cout<<0<<h;
		else cout<<h;
		cout<<':';
		if(m<10)cout<<0<<m;
		else cout<<m;
		cout<<':';
		if(s<10)cout<<0<<s;
		else cout<<s;
		cout<<'\n';
	}
}
