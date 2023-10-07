#include <iostream>
using namespace std;
int main(){
	int n,t,ti,h,m,s,d;
	char b;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>h>>b>>m>>b>>s;
		ti=h*3600+m*60+s;
		ti*=n;
		s=ti%60;
		ti-=s;
		ti/=60;
		m=ti%60;
		ti-=m;
		ti/=60;
		h=ti%24;
		ti-=h;
		ti/=24;
		d=ti;
		cout<<d<<' ';
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
