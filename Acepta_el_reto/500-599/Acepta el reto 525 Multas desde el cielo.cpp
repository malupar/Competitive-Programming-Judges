#include <iostream>

using namespace std;
int main(){
	int t,n,m,n2,m2;
	cin>>t;
	while(t--){
		cin >> n >> m >> n2 >> m2;
		if (n > m) swap(n, m);
		if (n2 > m2) swap(n2, m2);
		if (n2 < n) {
			swap(n, n2);
			swap(m, m2);
		}
		if (m <= n2) cout << "SEPARADOS\n";
		else cout << "SOLAPADOS\n";
	}
}
