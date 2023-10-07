#include <iostream>
using namespace std;
int main(){
	int t,metr,camp,mini,maxi;
	cin>>t;
	while(t--){
		cin>>metr>>camp;
		mini=camp*90*45;
		maxi=camp*120*90;
		if(metr>=mini&&metr<=maxi)cout<<"SI\n";
		else cout<<"NO\n";
	}
}
