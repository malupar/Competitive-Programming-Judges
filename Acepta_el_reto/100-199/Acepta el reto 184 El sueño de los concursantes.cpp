#include <iostream>
using namespace std;
int main(){
	int n,ti1,ti2,t,h,m;
	char b;
	cin>>n;
	while(n!=0){
		t=0;
		while(n--){
			cin>>h>>b>>m;
			ti1=h*60+m;
			cin>>b;
			cin>>h>>b>>m;
			ti2=h*60+m;
			if(ti2<ti1)ti2+=1440;
			t+=(ti2-ti1);
			//cout<<t<<' ';
		}
		m=t%60;
		t-=m;
		t/=60;
		h=t;
		if(h<10)cout<<0<<h;
		else cout<<h;
		cout<<b;
		if(m<10)cout<<0<<m;
		else cout<<m;
		cout<<'\n';
		cin>>n;
	}
}
