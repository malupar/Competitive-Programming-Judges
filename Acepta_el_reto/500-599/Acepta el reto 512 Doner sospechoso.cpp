#include <iostream>
using namespace std;
int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<100*a/(a+b)<<'\n';
	}
}
