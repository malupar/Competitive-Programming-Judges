#include <iostream>
using namespace std;
int main(){
	long long int n;
	while(cin>>n){
		if(n==0)break;
		if(n%2==0)cout<<"DERECHA\n";
		else cout<<"IZQUIERDA\n";
	}
}
