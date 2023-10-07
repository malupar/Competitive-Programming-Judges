#include <iostream>
using namespace std;
int n,calendarios,anomayor,anomenor,aux;
int main(){
	cin>>n;
	while(n--){
		cin>>calendarios;
		if (calendarios==1){
			cin>>anomayor;
			cout<<0<<endl;
		}
		else{
		cin>>anomayor>>anomenor;
		if(anomenor>anomayor){
				aux=anomayor;
				anomayor=anomenor;
				anomenor=aux;
			}
		for(int b=2;b<calendarios;b++){
		cin>>aux;
		if (aux>anomayor){
			anomayor=aux;
		}
		else if(aux<anomenor){
			anomenor=aux;
		}
		}
		if (anomayor==anomenor){
			cout<<0<<endl;
		}
		cout<<anomayor-anomenor-calendarios+1<<endl;
	}
}
}
