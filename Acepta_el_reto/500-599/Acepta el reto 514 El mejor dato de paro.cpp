#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		vector<int> v(n);
		int cont;
		for(int i=0;i<n;i++){
			if(i!=0)cout<<' ';
			cin>>v[i];
			cont=0;
			for(int j=i-1;j>=0;j--){
				if(v[j]<=v[i])break;
				cont++;
			}
			cout<<cont;
		}
		cout<<'\n';
	}
}
