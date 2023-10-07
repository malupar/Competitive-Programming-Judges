#include <iostream>
using namespace std;
int main(){
	int t,hora,min,ti;
	char b;
	cin>>t;
	while(t--){
	cin>>hora>>b>>min;
	if(hora==12)hora=0;
	ti=hora*60+min;
	ti=720-ti;
	min=ti%60;
	ti-=min;
	ti/=60;
	hora=ti;
	if(hora==0)hora=12;
	if(hora<10)cout<<0<<hora;
	else cout<<hora;
	cout<<b;
	if(min<10)cout<<0<<min;
	else cout<<min;
	cout<<'\n';
	}
}