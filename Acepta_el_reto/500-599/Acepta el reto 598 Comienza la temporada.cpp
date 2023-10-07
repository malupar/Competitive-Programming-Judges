#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n,m,contador;
	while(cin>>n>>m){
		contador=0;
		vector<int> tallas(n);
		vector<int> equipaciones(m);
		for(int i=0;i<n;i++){
			cin>>tallas[i];
		}
		for(int i=0;i<m;i++){
			cin>>equipaciones[i];
		}
		int pri=0;
		sort(tallas.begin(),tallas.end());
		sort(equipaciones.begin(),equipaciones.end());
		for(int i=0;i<n;i++){
			for(int j=pri;j<m;j++){
				if(tallas[i]==equipaciones[j]||tallas[i]==equipaciones[j]-1){
					contador++;
					equipaciones[j]=0;
					int pri=j;
					break;
				}
			}
		}
		cout<<n-contador<<'\n';
	}
}
