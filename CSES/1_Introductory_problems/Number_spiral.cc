#include <iostream>
using namespace std;
int main(){
	long long int t,r,c;
	cin>>t;
	while(t--){
		cin>>r>>c;
		long long int maxi=max(r,c);
		if(r==c){
			cout<<r*r-r+1<<'\n';
		}
		else{
			if(maxi==c){
				if(maxi&1)cout<<c*c-r+1<<'\n';
				else cout<<(maxi-1)*(maxi-1)+r<<'\n';
			}
			else{
				if(maxi&1)cout<<(maxi-1)*(maxi-1)+c<<'\n';
				else cout<<r*r-c+1<<'\n';
			}
		}
	}
}