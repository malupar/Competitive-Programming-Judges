#include <iostream>
using namespace std;
int main(){
	long long int numero;
	cin>>numero;
	while(numero!=1){
		cout<<numero<<' ';
		if(numero%2==0) numero/=2;
		else numero=numero*3+1;
	}
	cout<<1;
}