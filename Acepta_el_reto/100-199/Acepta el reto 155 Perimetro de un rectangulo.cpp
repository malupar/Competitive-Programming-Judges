#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	while(n>=0&&m>=0){
		cout<<n*2+m*2<<'\n';
		cin>>n>>m;
	}
}