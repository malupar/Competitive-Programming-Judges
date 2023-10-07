#include <iostream>
#include <string>
using namespace std;
int main(){
	string cadena;
	while(cin>>cadena){
	string salida="";
	int N=cadena.length();
	for(int i=0;i<N;i++){
		if(cadena[i]!='.'){
			if(cadena[i+1]=='.'&&cadena[i+2]=='.') salida+=cadena[i];
		}
	}
	cout<<salida<<'\n';
}
}
