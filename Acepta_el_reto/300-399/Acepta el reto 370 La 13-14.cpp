#include <iostream>
using namespace std;
int main(){
	int casos,primero,segundo;
	char barra;
	cin>>casos;
	while(casos--){
		cin>>primero>>barra>>segundo;
		if(primero>segundo) {
			if(primero-segundo!=1)cout<<"NO"<<'\n';
			else{
		if(segundo%2==0&&primero%2==1)cout<<"SI"<<'\n';
		else cout<<"NO"<<'\n';
	}
	}
	if(primero<=segundo) {
			if(segundo-primero!=1)cout<<"NO"<<'\n';
			else{
		if(segundo%2==1&&primero%2==0)cout<<"SI"<<'\n';
		else cout<<"NO"<<'\n';
	}
	}
}
}
