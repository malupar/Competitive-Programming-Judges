#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int cont=0;
		if(n==0)return 0;
		while(n>9){
			n-=9;
			cont++;
		}
		cout<<n;
		while(cont--)cout<<9;
		cout<<'\n';
	}
}
