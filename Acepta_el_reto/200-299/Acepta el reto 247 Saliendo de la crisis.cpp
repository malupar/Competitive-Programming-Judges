#include <iostream>
using namespace std;
int main(){
	int n,m;
	bool posi;
	cin>>n;
	while(n!=0){
		posi=true;
		int maxi=0;
		for(int i=0;i<n;i++){
			cin>>m;
			if(m<=maxi){
				posi=false;
			}
			maxi=m;
		}
		if(posi)cout<<"SI\n";
		else cout<<"NO\n";
		cin>>n;
	}
}
