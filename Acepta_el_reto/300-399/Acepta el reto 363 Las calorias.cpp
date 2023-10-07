#include <iostream>
using namespace std;
int calentr,comi,cal;
int main(){
	cin>>calentr;
	cin>>comi;
	while(calentr!=0){
	int suma=0;
	while(comi--){
	cin>>cal;
	suma+=cal;
}
if(suma%calentr==0) cout<<suma/calentr<<'\n';
else cout<<suma/calentr+1<<'\n';
cin>>calentr;
cin>>comi;
}
}
