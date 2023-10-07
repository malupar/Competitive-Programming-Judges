#include <iostream>
#include <math.h>
using namespace std;
long long int n,numero,base6,cociente,resto,contador,divisor;

long long int transformador(long long int base10){
	divisor=6*pow(10,contador);
	cociente=base10/divisor;
	resto=base10%divisor;
	if(cociente!=0){
		contador++;
		base6=cociente*pow(10,contador)+resto;
		return transformador(base6);
	}
	else{
		return base10;
	}
}

int main() {
	cin>>n;
	while(n--){
		cin>>numero;
		contador=0;
		cout<<transformador(numero)<<endl;
	}
}
