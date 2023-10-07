#include <iostream>

using namespace std;
int main(){
	int t,n,m,n2,m2;
	cin>>t;
	while(t--){
	cin>>n>>m>>n2>>m2;
	if(n2<m&&n2>n||m2<m&&m2>n||n2>m&&n2<n||m2>m&&m2<n)cout<<"SOLAPADOS\n";
	else if(n2>m&&n2>n&&m2<m&&m2<n||n2<m&&n2<n&&m2>m&&m2>n)cout<<"SOLAPADOS\n";
	else if(n<n2&&n<m2&&m>n2&&m>m2||n>n2&&n>m2&&m<n2&&m<m2)cout<<"SOLAPADOS\n";
	else cout<<"SEPARADOS\n";
}
}
