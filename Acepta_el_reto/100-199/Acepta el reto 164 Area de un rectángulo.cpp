#include <iostream>
using namespace std;
int main(){
	int n,m,n2,m2;
	cin>>n>>m>>n2>>m2;
	while(n2>=n&&m2>=m){
		cout<<(n2-n)*(m2-m)<<'\n';
		cin>>n>>m>>n2>>m2;
	}
}
