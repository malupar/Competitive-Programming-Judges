#include <iostream>
using namespace std;
int main(){
	int ie,v,x;
	while(cin>>ie>>v>>x){
		if(ie==0&&v==0&&x==0)break;
		int maxi=min(ie,v);
		maxi=min(maxi,x);
		for(int i=maxi;i>=1;i--){
			if(ie%i==0&&v%i==0&&x%i==0){
				cout<<ie/i+v/i+x/i<<'\n';
				break;
			}
		}
	}
}
