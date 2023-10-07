#include <iostream>
using namespace std;
int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<(a-b)/(a+b)*100<<'\n';
	}
}
